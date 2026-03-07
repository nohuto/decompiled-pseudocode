__int64 __fastcall CGenericInk::ProcessRoutingInfo(
        CGenericInk *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GENERICINK_ROUTINGINFO *a3)
{
  int v3; // esi
  __int64 v5; // r14
  __int64 i; // rbx
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = 0;
  *((_OWORD *)this + 23) = *(_OWORD *)((char *)a3 + 8);
  *((_OWORD *)this + 24) = *(_OWORD *)((char *)a3 + 24);
  *((_QWORD *)this + 50) = *((_QWORD *)a3 + 5);
  *((_BYTE *)this + 360) = 1;
  v5 = (__int64)(*((_QWORD *)this + 22) - *((_QWORD *)this + 21)) >> 3;
  if ( !(_DWORD)v5 )
    return 0LL;
  for ( i = 0LL; ; i += 8LL )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(i + *((_QWORD *)this + 21)) + 24LL) + 24LL);
    v8 = CGenericInk::SetContextMsgRoutingInfo(this, (struct CD3DDevice *)((v7 - 16) & -(__int64)(v7 != 0)));
    v9 = v8;
    if ( v8 < 0 )
      break;
    if ( ++v3 >= (unsigned int)v5 )
      return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9B,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\genericink.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
