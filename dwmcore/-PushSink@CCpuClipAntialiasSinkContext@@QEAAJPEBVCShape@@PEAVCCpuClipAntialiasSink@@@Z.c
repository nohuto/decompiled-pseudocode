__int64 __fastcall CCpuClipAntialiasSinkContext::PushSink(
        CCpuClipAntialiasSinkContext *this,
        const struct CShape *a2,
        struct CCpuClipAntialiasSink *a3)
{
  struct CCpuClipAntialiasSink *v3; // rdi
  _QWORD *v6; // rbp
  _QWORD *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct CCpuClipAntialiasSink *v16; // [rsp+60h] [rbp+18h] BYREF

  v16 = a3;
  v3 = a3;
  if ( a3 )
  {
    (**(void (__fastcall ***)(struct CCpuClipAntialiasSink *))a3)(a3);
    v6 = (_QWORD *)((char *)this + 16);
  }
  else
  {
    wil::com_ptr_t<CWeakReference<CVisual>,wil::err_returncode_policy>::reset(&v16);
    v6 = (_QWORD *)((char *)this + 16);
    v11 = 0x84BDA12F684BDA13uLL * ((__int64)(*((_QWORD *)this + 3) - *((_QWORD *)this + 2)) >> 4);
    if ( v11 )
      v12 = *(_QWORD *)(*((_QWORD *)this + 3) - 432LL) + 16LL;
    else
      v12 = 0LL;
    v13 = CCpuClipAntialiasSink::Create(v11, v12, a2, (char *)this + 904);
    v14 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
        (const char *)(unsigned int)v13,
        (int)&v16);
      wil::com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>::~com_ptr_t<ClipPlaneInfoRef,wil::err_returncode_policy>((__int64 *)&v16);
      return v14;
    }
    v3 = v16;
  }
  v7 = (_QWORD *)detail::vector_facade<CCpuClipAntialiasSinkContext::SinkEntry,detail::buffer_impl<CCpuClipAntialiasSinkContext::SinkEntry,2,1,detail::liberal_expansion_policy>>::reserve_region(
                   v6,
                   0x84BDA12F684BDA13uLL * ((__int64)(v6[1] - *v6) >> 4));
  memset_0(v7 + 2, 0, 0x1A0uLL);
  *v7 = 0LL;
  v7[1] = v7 + 4;
  v7[2] = v7 + 4;
  v7[3] = v7 + 54;
  v8 = *((_QWORD *)this + 3);
  v9 = *(_QWORD *)(v8 - 432);
  *(_QWORD *)(v8 - 432) = v3;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  return 0LL;
}
