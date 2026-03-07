__int64 sub_1400A233C()
{
  unsigned int *i; // rcx
  unsigned int *v2; // rbx
  __int64 (*v3)(void); // rax

  if ( &unk_1400DF3C0 <= (_UNKNOWN *)qword_1400DF3D0 )
  {
    for ( i = (unsigned int *)qword_1400DF3D0; ; i = (unsigned int *)((char *)v2 + *v2) )
    {
      while ( i + 2 <= (unsigned int *)qword_1400DF3D0 && !*(_QWORD *)i )
        i += 2;
      if ( i >= (unsigned int *)qword_1400DF3D0 )
        break;
      if ( i + 10 > (unsigned int *)qword_1400DF3D0 || *i != 40 || (v2 = i) == 0LL )
      {
        DbgPrintEx(0x4Du, 0, "FxGetNextObjectContextTypeInfo failed\n");
        return 3221225595LL;
      }
      v3 = (__int64 (*)(void))*((_QWORD *)i + 4);
      if ( v3 )
        *((_QWORD *)i + 3) = v3();
    }
    return 0LL;
  }
  else
  {
    DbgPrintEx(
      0x4Du,
      0,
      "FxStubInitTypes: invalid driver image, the address of symbol __KMDF_TYPE_INIT_START 0x%p is greater than the addre"
      "ss of symbol __KMDF_TYPE_INIT_END 0x%p, status 0x%x\n",
      &unk_1400DF3C0,
      qword_1400DF3D0,
      -1073741701);
    return 3221225595LL;
  }
}
