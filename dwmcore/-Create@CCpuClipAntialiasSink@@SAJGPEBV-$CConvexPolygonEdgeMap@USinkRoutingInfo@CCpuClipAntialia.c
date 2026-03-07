__int64 __fastcall CCpuClipAntialiasSink::Create(unsigned __int16 a1, __int64 a2, __int64 a3, int a4, __int64 *a5)
{
  CCpuClipAntialiasSink *v9; // rax
  char v10; // al
  __int64 v11; // rdi
  int v12; // eax
  unsigned int v13; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF

  v9 = (CCpuClipAntialiasSink *)operator new(0x40uLL);
  if ( v9 )
    v9 = CCpuClipAntialiasSink::CCpuClipAntialiasSink(v9);
  wil::com_ptr_t<CCpuClipAntialiasSink,wil::err_returncode_policy>::com_ptr_t<CCpuClipAntialiasSink,wil::err_returncode_policy>(
    &v16,
    v9);
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 16LL))(a3);
  v11 = v16;
  if ( v10 || (v12 = CCpuClipAntialiasSink::Initialize(v16, a1, a2, a3), v13 = v12, v12 >= 0) )
  {
    v16 = 0LL;
    v13 = 0;
    *a5 = v11;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassink.cpp",
      (const char *)(unsigned int)v12,
      a4);
  }
  wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>(&v16);
  return v13;
}
