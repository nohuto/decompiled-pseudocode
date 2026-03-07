struct _GLYPHDATA *__fastcall RFONTOBJ::pgdDefault(RFONTOBJ *this, struct RFONTOBJ *a2, __int64 a3, __int64 a4)
{
  struct _GLYPHDATA **v6; // rdx

  if ( !*(_QWORD *)(*(_QWORD *)this + 480LL) && !(unsigned int)RFONTOBJ::bAllocateCache(this, a2, a3, a4) )
    return 0LL;
  v6 = (struct _GLYPHDATA **)(*(_QWORD *)(*(_QWORD *)this + 480LL) + 8LL);
  if ( !*v6 )
    RFONTOBJ::bInsertMetricsPlus(this, v6);
  return *(struct _GLYPHDATA **)(*(_QWORD *)(*(_QWORD *)this + 480LL) + 8LL);
}
