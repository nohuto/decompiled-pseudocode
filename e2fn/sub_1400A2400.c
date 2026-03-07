__int64 __fastcall sub_1400A2400(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int *i; // rbx
  __int64 (__fastcall *v5)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), __int64, __int64, unsigned int *); // rax
  int v6; // eax

  v1 = 0;
  if ( &unk_1400DF350 <= &unk_1400DF3B0 )
  {
    for ( i = (unsigned int *)&unk_1400DF360; ; i = (unsigned int *)((char *)i + *i) )
    {
      while ( i + 2 <= (unsigned int *)&unk_1400DF3B0 && !*(_QWORD *)i )
        i += 2;
      if ( i >= (unsigned int *)&unk_1400DF3B0 )
        return v1;
      if ( (i + 20 > (unsigned int *)&unk_1400DF3B0 || *i != 80)
        && (i + 30 > (unsigned int *)&unk_1400DF3B0 || *i != 120)
        || !i )
      {
        break;
      }
      v5 = (__int64 (__fastcall *)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), __int64, __int64, unsigned int *))*((_QWORD *)i + 7);
      off_1400DF3B8 = i;
      if ( v5 )
      {
        v6 = v5(WdfVersionBindClass, a1, qword_1400DF6A8, i);
        v1 = v6;
        if ( v6 < 0 )
        {
          DbgPrintEx(
            0x4Du,
            0,
            "FxStubBindClasses: ClientBindClass %p, WDF_CLASS_BIND_INFO 0x%p, class %S, returned status 0x%x\n",
            *((const void **)i + 7),
            i,
            *((const wchar_t **)i + 1),
            v6);
          return v1;
        }
      }
      else
      {
        v1 = WdfVersionBindClass(a1, qword_1400DF6A8, i);
        if ( (v1 & 0x80000000) != 0 )
        {
          DbgPrintEx(
            0x4Du,
            0,
            "FxStubBindClasses: VersionBindClass WDF_CLASS_BIND_INFO 0x%p, class %S, returned status 0x%x\n",
            i,
            *((const wchar_t **)i + 1),
            v1);
          return v1;
        }
      }
    }
    DbgPrintEx(0x4Du, 0, "FxGetNextClassBindInfo failed\n");
  }
  else
  {
    DbgPrintEx(
      0x4Du,
      0,
      "FxStubBindClasses: invalid driver image, the address of symbol __KMDF_CLASS_BIND_START 0x%p is greater than the ad"
      "dress of symbol __KMDF_CLASS_BIND_END 0x%p, status 0x%x\n",
      &unk_1400DF350,
      &unk_1400DF3B0,
      -1073741701);
  }
  return 3221225595LL;
}
