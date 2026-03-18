/*
 * XREFs of xxxSendShutdownData @ 0x1C022D134
 * Callers:
 *     xxxProcessEventMessage @ 0x1C005C220 (xxxProcessEventMessage.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C002393C (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     SfnCOPYDATA @ 0x1C0106080 (SfnCOPYDATA.c)
 *     _GetWindowIcon @ 0x1C0150580 (_GetWindowIcon.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall xxxSendShutdownData(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned int v6; // ecx
  unsigned __int64 v7; // rdx
  char *Prop; // rax
  __int64 v10; // [rsp+48h] [rbp-C0h] BYREF
  int v11; // [rsp+50h] [rbp-B8h]
  int v12; // [rsp+54h] [rbp-B4h]
  _QWORD *v13; // [rsp+58h] [rbp-B0h]
  _QWORD v14[134]; // [rsp+68h] [rbp-A0h] BYREF

  memset(v14, 0, 0x428uLL);
  v12 = 0;
  if ( !gspwndBSDR )
    return 0LL;
  if ( a1 == 0xFFFF )
  {
LABEL_19:
    v13 = v14;
    v14[0] = a1;
    v10 = 0LL;
    v11 = 1064;
    SfnCOPYDATA(
      (__int64 *)gspwndBSDR,
      809,
      a2,
      (__int64)&v10,
      *(_QWORD *)(*((_QWORD *)gspwndBSDR + 5) + 120LL),
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
    }
    else if ( *(_DWORD *)(*(_QWORD *)(v4 + 40) + 236LL) != 1 )
    {
      return 0LL;
    }
    *(_DWORD *)(v4 + 320) |= 0x400000u;
    v14[1] = GetWindowIcon(v4, 1);
    v6 = *(_DWORD *)(*(_QWORD *)(v5 + 40) + 184LL);
    if ( v6 )
    {
      v7 = ((unsigned __int64)v6 >> 1) + 1;
      if ( v7 > 0x105 )
        v7 = 261LL;
      RtlStringCchCopyW((char *)&v14[67] + 2, v7, *(char **)(v5 + 184));
    }
    else
    {
      WORD1(v14[67]) = 0;
    }
    Prop = (char *)GetProp(v5, (unsigned __int16)gatomShutdownBlockingReason, 1u);
    if ( Prop )
      RtlStringCchCopyW((char *)&v14[2], 261LL, Prop);
    else
      LOWORD(v14[2]) = 0;
    goto LABEL_19;
  }
  return 0LL;
}
