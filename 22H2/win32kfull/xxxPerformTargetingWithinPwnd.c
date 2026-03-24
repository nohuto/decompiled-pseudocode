/*
 * XREFs of xxxPerformTargetingWithinPwnd @ 0x1C02171EC
 * Callers:
 *     PerformTargetingWithinPwnd @ 0x1C0216D50 (PerformTargetingWithinPwnd.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C00598F0 (xxxSendTransformableMessageTimeout.c)
 *     _GetProp @ 0x1C006B8F0 (_GetProp.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     memset @ 0x1C016DE00 (memset.c)
 *     TouchTargetingCreateContact @ 0x1C025F244 (TouchTargetingCreateContact.c)
 */

__int64 __fastcall xxxPerformTargetingWithinPwnd(unsigned __int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax
  __int128 *v7; // r14
  __int128 v8; // xmm0
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // edx
  __int128 v13; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v14; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v15; // [rsp+70h] [rbp-90h] BYREF
  int v16; // [rsp+80h] [rbp-80h] BYREF
  __int64 v17; // [rsp+84h] [rbp-7Ch]
  __int128 v18; // [rsp+8Ch] [rbp-74h]
  __int128 v19; // [rsp+9Ch] [rbp-64h]
  int v20; // [rsp+ACh] [rbp-54h]
  __int128 v21; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v22[184]; // [rsp+C0h] [rbp-40h] BYREF
  int v23; // [rsp+178h] [rbp+78h]
  int v24; // [rsp+17Ch] [rbp+7Ch]

  *a3 = 0;
  a3[1] = 0;
  result = GetProp(a1, (unsigned __int16)gatomPtrTargetFlags, 1LL);
  if ( (result & 0xFFFD) != 0 )
  {
    result = TouchTargetingEnabledForInput(*(_QWORD *)(a2 + 40), a2 + 8);
    if ( (_DWORD)result )
    {
      v15 = 0LL;
      v21 = 0LL;
      v7 = 0LL;
      memset(v22, 0, sizeof(v22));
      v24 = 0;
      v23 = 0;
      if ( (unsigned int)_GetDeviceRects(a2 + 8, &v15, &v21) )
      {
        v13 = v21;
        v14 = v15;
        _SetHimetricToPixelRatio(&v14, &v13, v22);
        v7 = &v15;
      }
      v8 = *(_OWORD *)(a2 + 112);
      v16 = *(_DWORD *)(a2 + 12);
      v17 = *(_QWORD *)(a2 + 40);
      v9 = *(_DWORD *)(a2 + 108);
      v18 = v8;
      v19 = v8;
      if ( (v9 & 2) != 0 )
        v20 = *(_DWORD *)(a2 + 144);
      else
        v20 = 0;
      result = TouchTargetingCreateContact(&v16, v7, 1LL, v22);
      if ( *(_DWORD *)&v22[176] )
      {
        if ( *(_DWORD *)&v22[180] )
        {
          v17 = *(_QWORD *)&v22[32];
          v20 = *(_DWORD *)&v22[40];
          v18 = *(_OWORD *)&v22[16];
          v19 = *(_OWORD *)v22;
          _InterlockedIncrement(&glSendMessage);
          v10 = xxxSendTransformableMessageTimeout(a1, 0x24Du, 0LL, (struct _LARGE_STRING *)&v16, 0, 0, 0LL, 1, 0);
          result = 4093LL;
          if ( ((unsigned __int16)(v10 >> 20) & 0xFFFu) <= 0xFFD )
          {
            v11 = (v10 >> 10) & 0x3FF;
            *a3 = v11;
            if ( (unsigned int)v11 > 0x1FF )
            {
              result = (unsigned int)(v11 - 1024);
              *a3 = result;
            }
            v12 = v10 & 0x3FF;
            a3[1] = v12;
            if ( v12 > 0x1FF )
            {
              result = v12 - 1024;
              a3[1] = result;
            }
          }
        }
      }
    }
  }
  return result;
}
