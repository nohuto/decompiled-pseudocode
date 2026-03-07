const struct CLightsMask *__fastcall CD3DBatchExecutionContext::GetLightsMask(CD3DBatchExecutionContext *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 6);
  if ( v1 )
    return (const struct CLightsMask *)(v1 + 16);
  if ( __TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                                                     + (unsigned int)tls_index)
                                                                   + 4LL) )
  {
    Init_thread_header(&__TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA);
    if ( __TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA == -1 )
    {
      `CLightsMask::NoLights'::`2'::noLights = -1;
      Init_thread_footer(&__TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA);
    }
  }
  return (const struct CLightsMask *)&`CLightsMask::NoLights'::`2'::noLights;
}
