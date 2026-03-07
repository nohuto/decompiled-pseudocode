__int64 FxStubInitTypes(void)
{
  unsigned int *i; // rcx
  unsigned int *v2; // rbx
  __int64 (*v3)(void); // rax

  if ( &__KMDF_TYPE_INIT_START > (_UNKNOWN *)__KMDF_TYPE_INIT_END )
  {
    DbgPrintEx(
      0x4Du,
      0,
      "FxStubInitTypes: invalid driver image, the address of symbol __KMDF_TYPE_INIT_START 0x%p is greater than the addre"
      "ss of symbol __KMDF_TYPE_INIT_END 0x%p, status 0x%x\n",
      &__KMDF_TYPE_INIT_START,
      __KMDF_TYPE_INIT_END,
      -1073741701);
  }
  else
  {
    for ( i = (unsigned int *)__KMDF_TYPE_INIT_END; ; i = (unsigned int *)((char *)v2 + *v2) )
    {
      while ( i + 2 <= (unsigned int *)__KMDF_TYPE_INIT_END && !*(_QWORD *)i )
        i += 2;
      if ( i >= (unsigned int *)__KMDF_TYPE_INIT_END )
        return 0LL;
      if ( i + 10 > (unsigned int *)__KMDF_TYPE_INIT_END )
        break;
      if ( *i != 40 )
        break;
      v2 = i;
      if ( !i )
        break;
      v3 = (__int64 (*)(void))*((_QWORD *)i + 4);
      if ( v3 )
        *((_QWORD *)i + 3) = v3();
    }
    DbgPrintEx(0x4Du, 0, "FxGetNextObjectContextTypeInfo failed\n");
  }
  return 3221225595LL;
}
