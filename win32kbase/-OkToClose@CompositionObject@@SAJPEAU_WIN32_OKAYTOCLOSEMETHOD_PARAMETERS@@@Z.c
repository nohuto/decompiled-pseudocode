__int64 __fastcall CompositionObject::OkToClose(struct _WIN32_OKAYTOCLOSEMETHOD_PARAMETERS *a1)
{
  __int64 v2; // rdi

  v2 = *((_QWORD *)a1 + 1);
  if ( *((_BYTE *)a1 + 24) && (unsigned int)PsGetProcessSessionIdEx(*(_QWORD *)a1) == -1 )
    return 3221225506LL;
  else
    return (*(__int64 (__fastcall **)(_QWORD, struct _WIN32_OKAYTOCLOSEMETHOD_PARAMETERS *))(**(_QWORD **)(v2 + 8) + 32LL))(
             *(_QWORD *)(v2 + 8),
             a1);
}
