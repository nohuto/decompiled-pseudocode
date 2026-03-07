__int64 __fastcall xxxSendShutdownData(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned int v6; // ecx
  size_t v7; // rdx
  size_t *Prop; // rax
  __int64 v10; // [rsp+48h] [rbp-C0h] BYREF
  int v11; // [rsp+50h] [rbp-B8h]
  int v12; // [rsp+54h] [rbp-B4h]
  _QWORD *v13; // [rsp+58h] [rbp-B0h]
  _QWORD v14[2]; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int16 v15[261]; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int16 v16[267]; // [rsp+282h] [rbp+17Ah] BYREF

  memset_0(v14, 0, 0x428uLL);
  v12 = 0;
  if ( gspwndBSDR )
  {
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
        v14[1] = GetWindowIcon(v4, 1);
        v6 = *(_DWORD *)(*(_QWORD *)(v5 + 40) + 184LL);
        if ( v6 )
        {
          v7 = ((unsigned __int64)v6 >> 1) + 1;
          if ( v7 > 0x105 )
            v7 = 261LL;
          RtlStringCchCopyW(v16, v7, *(size_t **)(v5 + 184));
        }
        else
        {
          v16[0] = 0;
        }
        Prop = (size_t *)GetProp(v5, (unsigned __int16)gatomShutdownBlockingReason, 1u);
        if ( Prop )
          RtlStringCchCopyW(v15, 0x105uLL, Prop);
        else
          v15[0] = 0;
        goto LABEL_19;
      }
      if ( *(_DWORD *)(*(_QWORD *)(v4 + 40) + 236LL) == 1 )
        goto LABEL_9;
    }
  }
  return 0LL;
}
