__int64 __fastcall CChannel::SendCommand(CChannel *this, void *a2, unsigned int a3)
{
  struct CCommandBatch **v3; // rdi
  size_t v4; // rsi
  int v6; // eax
  unsigned int v7; // ebx
  struct CCommandBatch *v8; // rcx
  _DWORD *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r14
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // ebp
  PSLIST_ENTRY v16; // rax
  unsigned int v17; // ecx
  struct CCommandBatch *v18; // r8
  int v19; // eax
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  unsigned int v22; // ecx
  unsigned int v23; // [rsp+20h] [rbp-28h]
  unsigned int v24; // [rsp+20h] [rbp-28h]
  unsigned int v25; // [rsp+20h] [rbp-28h]
  unsigned int v26; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (struct CCommandBatch **)((char *)this + 176);
  v4 = a3;
  if ( !*((_QWORD *)this + 22) )
  {
    v16 = InterlockedPopEntrySList((PSLIST_HEADER)(*((_QWORD *)this + 7) + 160LL));
    if ( v16 )
    {
      CDataStreamWriter::Recycle((CDataStreamWriter *)&v16[-4]);
      *v3 = v18;
    }
    else
    {
      v19 = CCommandBatch::Create(v17, v3);
      v7 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x46,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\internalmilcmdconnection.cpp",
          (const char *)(unsigned int)v19,
          v23);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x117,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
          (const char *)v7,
          v24);
        v20 = v7;
        v21 = 255LL;
        goto LABEL_14;
      }
    }
  }
  v6 = CDataStreamWriter::EnsureItem(*v3, v4);
  v7 = v6;
  if ( v6 >= 0 )
  {
    CDataStreamWriter::BeginItem(*v3);
    v8 = *v3;
    if ( (_DWORD)v4 )
    {
      v9 = (_DWORD *)((char *)v8 + 56);
      if ( (*((_QWORD *)v8 + 6) || *v9)
        && (v10 = *((_QWORD *)v8 + 4), *(_DWORD *)(v10 + 16) - *(_DWORD *)(v10 + 20) >= (unsigned int)v4) )
      {
        v11 = v10 + *(unsigned int *)(v10 + 20);
        v12 = CDataStreamWriter::IncreaseWrittenByteCount(v8, v4);
        v14 = v12;
        if ( v12 >= 0 )
        {
          *v9 += v4;
          memcpy_0((void *)(v11 + 24), a2, v4);
          goto LABEL_8;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xD8u, 0LL);
      }
      else
      {
        v14 = -2147418113;
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v8, 0LL, 0, -2147418113, 0xD1u, 0LL);
      }
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v14, 0xB2u, 0LL);
    }
LABEL_8:
    CDataStreamWriter::EndItem(*v3);
    return 0LL;
  }
  v20 = (unsigned int)v6;
  v21 = 261LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v21,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
    (const char *)v20,
    v23);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9D,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
    (const char *)v7,
    v25);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7D,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
    (const char *)v7,
    v26);
  return v7;
}
