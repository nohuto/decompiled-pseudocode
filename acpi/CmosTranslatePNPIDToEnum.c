__int64 __fastcall CmosTranslatePNPIDToEnum(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  const char *v4; // rax
  unsigned int v5; // edi
  __int64 v8; // rbx

  v4 = CmosTypeTranslationTable;
  v5 = 0;
  if ( CmosTypeTranslationTable )
  {
    v8 = 0LL;
    while ( !strstr(*(const char **)(a4 + 64), v4) )
    {
      v8 = ++v5;
      v4 = (&CmosTypeTranslationTable)[2 * v5];
      if ( !v4 )
        return CmosConfigSpaceHandlerWorker(a1, 0LL, 0LL, (_QWORD *)a4);
    }
    CmosDeviceType = (int)(&CmosTypeTranslationTable)[2 * v8 + 1];
  }
  return CmosConfigSpaceHandlerWorker(a1, 0LL, 0LL, (_QWORD *)a4);
}
