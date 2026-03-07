__int64 LinkNodeWriteStateToHardware()
{
  __int64 v0; // rbx
  __int64 *i; // rax
  int v2; // eax
  __int64 result; // rax
  __int64 *v4; // rax
  volatile signed __int32 *v5; // rdi
  __int64 v6; // rdx

  v0 = LinkNodeListHead - 56;
  for ( i = (__int64 *)LinkNodeListHead; &LinkNodeListHead != i; v0 = (__int64)(i - 7) )
  {
    v2 = *(_DWORD *)(v0 + 24);
    if ( *(_DWORD *)(v0 + 28) )
    {
      if ( !v2 || *(_DWORD *)(v0 + 36) != *(_DWORD *)(v0 + 32) )
      {
        result = LinkNodepRunSrs(*(_QWORD *)(v0 + 600), *(unsigned int *)(v0 + 36));
        if ( (int)result < 0 )
          return result;
      }
    }
    else if ( v2 )
    {
      v4 = AMLIGetNamedChild(*(_QWORD **)(v0 + 600), 1397310559);
      v5 = (volatile signed __int32 *)v4;
      if ( v4 )
      {
        AMLIEvalNameSpaceObject(v4, 0LL, 0, 0LL);
        AMLIDereferenceHandleEx(v5, v6);
      }
    }
    i = *(__int64 **)(v0 + 56);
  }
  return 0LL;
}
