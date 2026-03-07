struct BRUSH *__fastcall BRUSHMEMOBJ::pbrAllocBrush(BRUSHMEMOBJ *this, int a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  ULONG_PTR v5; // rbx

  *((_DWORD *)this + 4) = 0;
  if ( a2 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 24) + 6504LL) + 24LL);
    if ( !v4 )
    {
      v5 = 0LL;
      goto LABEL_5;
    }
    v3 = NSInstrumentation::CTypeIsolation<49152,192>::Allocate();
  }
  else
  {
    if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(this) + 24) + 6504LL) + 16LL) )
      return 0LL;
    v3 = NSInstrumentation::CTypeIsolation<40960,160>::Allocate();
  }
  v5 = v3;
LABEL_5:
  if ( v5 )
  {
    *(_QWORD *)(v5 + 88) = 0LL;
    *(_DWORD *)(v5 + 84) = 0;
    *(_DWORD *)(v5 + 96) = 0;
    *(_DWORD *)(v5 + 100) = -1;
    *(_DWORD *)(v5 + 144) = a2 != 0;
    *(_QWORD *)(v5 + 48) = v5 + 72;
    *(_DWORD *)(v5 + 44) = _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(SGDGetSessionState(v4) + 24)
                                                                           + 744LL));
    if ( !(unsigned __int8)AcquireReferenceCountedObjectHandle(2LL, v5, v5 + 136) )
    {
      FreeBrushMemory(v5);
      return 0LL;
    }
  }
  return (struct BRUSH *)v5;
}
