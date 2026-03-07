__int64 __fastcall xxxWrapCallWindowProc(
        struct tagWND *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  __int64 v10; // rax
  unsigned int v11; // ecx

  if ( !(unsigned int)CheckProcessIdentity(a1, a2, a3, a4) )
    return 0LL;
  v10 = HMValidateHandleNoRip(a5, 7);
  v11 = a2 & 0x1FFFF;
  if ( v10 )
  {
    if ( v11 < 0x400 )
      return ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64, _QWORD, _QWORD, int, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)a2]])(
               a1,
               a2,
               a3,
               a4,
               *(_QWORD *)(*(_QWORD *)(v10 + 40) + 16LL),
               *(_QWORD *)(gpsi + 752LL),
               (*(unsigned __int16 *)(*(_QWORD *)(v10 + 40) + 24LL) >> 1) & 1,
               0LL);
    else
      return SfnDWORD((__int64 *)a1, a2, a3, a4, *(_QWORD *)(*(_QWORD *)(v10 + 40) + 16LL), *(_QWORD *)(gpsi + 752LL));
  }
  else if ( v11 < 0x400 )
  {
    return ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64, unsigned __int64, _QWORD, bool, _QWORD))gapfnScSendMessage[(unsigned __int8)MessageTable[(unsigned __int16)a2]])(
             a1,
             a2,
             a3,
             a4,
             a5,
             *(_QWORD *)(gpsi + 560LL),
             a5 == *(_QWORD *)(gpsi + 480LL),
             0LL);
  }
  else
  {
    return SfnDWORD((__int64 *)a1, a2, a3, a4, a5, *(_QWORD *)(gpsi + 560LL));
  }
}
