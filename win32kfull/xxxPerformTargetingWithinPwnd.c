/*
 * XREFs of xxxPerformTargetingWithinPwnd @ 0x1C01E7FFC
 * Callers:
 *     PerformTargetingWithinPwnd @ 0x1C01E7940 (PerformTargetingWithinPwnd.c)
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C006E550 (xxxSendTransformableMessageTimeout.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     TouchTargetingCreateContact @ 0x1C0250C6C (TouchTargetingCreateContact.c)
 */

__int64 __fastcall xxxPerformTargetingWithinPwnd(struct tagWND *a1, __int64 a2, _DWORD *a3)
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
  int v15; // [rsp+70h] [rbp-90h] BYREF
  __int64 v16; // [rsp+74h] [rbp-8Ch]
  __int128 v17; // [rsp+7Ch] [rbp-84h]
  __int128 v18; // [rsp+8Ch] [rbp-74h]
  int v19; // [rsp+9Ch] [rbp-64h]
  __int128 v20; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v21; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v22[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v23; // [rsp+E0h] [rbp-20h]
  int v24; // [rsp+E8h] [rbp-18h]
  int v25; // [rsp+170h] [rbp+70h]
  int v26; // [rsp+174h] [rbp+74h]
  int v27; // [rsp+178h] [rbp+78h]
  int v28; // [rsp+17Ch] [rbp+7Ch]

  *a3 = 0;
  a3[1] = 0;
  result = GetProp((__int64)a1, (unsigned __int16)gatomPtrTargetFlags, 1u);
  if ( (result & 0xFFFD) != 0 )
  {
    result = TouchTargetingEnabledForInput(*(_QWORD *)(a2 + 40), a2 + 8);
    if ( (_DWORD)result )
    {
      v20 = 0LL;
      v21 = 0LL;
      v7 = 0LL;
      v17 = 0LL;
      v18 = 0LL;
      memset_0(v22, 0, 0xB8uLL);
      v28 = 0;
      v27 = 0;
      if ( (unsigned int)_GetDeviceRects(a2 + 8, &v20, &v21) )
      {
        v13 = v21;
        v14 = v20;
        _SetHimetricToPixelRatio(&v14, &v13, v22);
        v7 = &v20;
      }
      v8 = *(_OWORD *)(a2 + 112);
      v15 = *(_DWORD *)(a2 + 12);
      v16 = *(_QWORD *)(a2 + 40);
      v9 = *(_DWORD *)(a2 + 108);
      v17 = v8;
      v18 = v8;
      if ( (v9 & 2) != 0 )
        v19 = *(_DWORD *)(a2 + 144);
      else
        v19 = 0;
      result = TouchTargetingCreateContact(&v15, v7, 1LL, v22);
      if ( v25 )
      {
        if ( v26 )
        {
          v16 = v23;
          v19 = v24;
          v17 = v22[1];
          v18 = v22[0];
          _InterlockedIncrement(&glSendMessage);
          v10 = xxxSendTransformableMessageTimeout(a1, 0x24Du, 0LL, (__int128 *)&v15, 0, 0, 0LL, 1, 0);
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
