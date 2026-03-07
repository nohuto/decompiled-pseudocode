__int64 __fastcall CCpuClipAntialiasSinkContext::Create(struct CCpuClipAntialiasSinkContext **a1)
{
  struct CObjectCache *ObjectCache; // rax
  _QWORD *v3; // rbx
  int v4; // ecx
  __int64 result; // rax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  ObjectCache = CThreadContext::GetObjectCache((struct CCpuClipAntialiasSinkContext *)a1);
  v3 = 0LL;
  v4 = *((_DWORD *)ObjectCache + 1);
  if ( v4 )
  {
    v3 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *v3;
    *((_DWORD *)ObjectCache + 1) = v4 - 1;
  }
  if ( v3 || (v3 = DefaultHeap::Alloc(0x3D0uLL)) != 0LL )
  {
    memset_0(v3, 0, 0x3D0uLL);
    *v3 = &CCpuClipAntialiasSinkContext::`vftable';
    v3[2] = v3 + 5;
    v3[4] = v3 + 113;
    v3[3] = v3 + 5;
    *((_DWORD *)v3 + 242) = 0;
    (*(void (__fastcall **)(_QWORD *))*v3)(v3);
    result = 0LL;
    *a1 = (struct CCpuClipAntialiasSinkContext *)v3;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
      (const char *)0x8007000ELL,
      v6);
    return 2147942414LL;
  }
  return result;
}
