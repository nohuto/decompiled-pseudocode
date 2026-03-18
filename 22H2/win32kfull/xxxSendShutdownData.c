/*
 * XREFs of xxxSendShutdownData @ 0x1C02137F8
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0125270 (xxxProcessEventMessage.c)
 * Callees:
 *     SfnCOPYDATA @ 0x1C0022620 (SfnCOPYDATA.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0048AB8 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     _GetWindowIcon @ 0x1C01E380C (_GetWindowIcon.c)
 */

__int64 __fastcall xxxSendShutdownData(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r9
  unsigned int v7; // ecx
  size_t v8; // rdx
  size_t *Prop; // rax
  __int64 v11; // [rsp+48h] [rbp-C0h] BYREF
  int v12; // [rsp+50h] [rbp-B8h]
  int v13; // [rsp+54h] [rbp-B4h]
  _QWORD *v14; // [rsp+58h] [rbp-B0h]
  _QWORD v15[2]; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int16 v16[261]; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int16 v17[267]; // [rsp+282h] [rbp+17Ah] BYREF

  memset_0(v15, 0, 0x428uLL);
  v13 = 0;
  if ( gspwndBSDR )
  {
    if ( a1 == 0xFFFF )
    {
LABEL_19:
      v14 = v15;
      v15[0] = a1;
      v11 = 0LL;
      v12 = 1064;
      SfnCOPYDATA(
        (__int64 *)gspwndBSDR,
        0x329u,
        a2,
        (__int64)&v11,
        *(_QWORD *)(*(_QWORD *)(gspwndBSDR + 40) + 120LL),
        *(_QWORD *)(gpsi + 752LL));
      return 0LL;
    }
    v4 = ValidateHwndEx(a1, 0LL, 0LL);
    if ( !a2 )
    {
      if ( v4 )
        *(_DWORD *)(v4 + 320) &= ~0x400000u;
      goto LABEL_19;
    }
    v5 = v4;
    if ( v4 )
    {
      if ( *(_QWORD *)v4 == ghwndBlocking )
      {
        a2 = 2LL;
LABEL_9:
        *(_DWORD *)(v4 + 320) |= 0x400000u;
        v15[1] = GetWindowIcon(v4, 1);
        v7 = *(_DWORD *)(*(_QWORD *)(v5 + 40) + 184LL);
        if ( v7 )
        {
          v8 = ((unsigned __int64)v7 >> 1) + 1;
          if ( v8 > 0x105 )
            v8 = 261LL;
          RtlStringCchCopyW(v17, v8, *(size_t **)(v5 + 184));
        }
        else
        {
          v17[0] = 0;
        }
        Prop = (size_t *)GetProp(v5, (unsigned __int16)gatomShutdownBlockingReason, 1LL, v6);
        if ( Prop )
          RtlStringCchCopyW(v16, 0x105uLL, Prop);
        else
          v16[0] = 0;
        goto LABEL_19;
      }
      if ( *(_DWORD *)(*(_QWORD *)(v4 + 40) + 236LL) == 1 )
        goto LABEL_9;
    }
  }
  return 0LL;
}
