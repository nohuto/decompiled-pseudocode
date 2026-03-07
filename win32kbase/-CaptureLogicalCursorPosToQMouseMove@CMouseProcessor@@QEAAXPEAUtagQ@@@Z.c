void __fastcall CMouseProcessor::CaptureLogicalCursorPosToQMouseMove(CMouseProcessor *this, struct tagQ *a2)
{
  __int64 v2; // rax
  __int64 v4; // xmm0_8
  unsigned int v5; // edi
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v2 = *((_QWORD *)a2 + 14);
  if ( v2 )
  {
    v5 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 424LL) + 280LL);
    CMouseProcessor::LogicalCursorPosFromDpiAwarenessContext(this, (__int64)&v6, v5);
    v4 = v6;
  }
  else
  {
    v4 = *(_QWORD *)((char *)this + 60);
    v5 = *((_DWORD *)this + 17);
  }
  *((_QWORD *)a2 + 24) = v4;
  *((_DWORD *)a2 + 50) = v5;
}
