_QWORD *__fastcall vUnmapFontCacheFile(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *result; // rax
  __int64 v3; // rbx

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  result = *(_QWORD **)(v1 + 19392);
  if ( result[10] )
  {
    if ( *result )
    {
      v3 = result[12];
      result[12] = 0LL;
      vUnmapFile((struct _FILEVIEW *)(*(_QWORD *)(v1 + 19392) + 48LL));
      memset_0((void *)(*(_QWORD *)(v1 + 19392) + 48LL), 0, 0x50uLL);
      *(_QWORD *)(*(_QWORD *)(v1 + 19392) + 96LL) = v3;
      result = *(_QWORD **)(v1 + 19392);
      *result = 0LL;
    }
  }
  return result;
}
