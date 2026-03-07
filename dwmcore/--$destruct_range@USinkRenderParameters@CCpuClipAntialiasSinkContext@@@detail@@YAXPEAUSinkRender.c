__int64 __fastcall detail::destruct_range<CCpuClipAntialiasSinkContext::SinkRenderParameters>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(_QWORD *)(v3 + 24);
      if ( v4 )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      v5 = *(_QWORD *)(v3 + 16);
      if ( v5 )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      if ( *(_QWORD *)v3 )
        result = CMILRefCountBaseT<IMILRefCount>::InternalRelease(*(volatile signed __int32 **)v3);
      v3 += 40LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
