__int64 __fastcall CCD_TOPOLOGY::Functionalize(CCD_TOPOLOGY *this, unsigned int a2, char a3)
{
  unsigned int v6; // ebx
  int active; // eax
  __int64 v8; // rdi
  unsigned __int16 v10; // cx
  __int64 v11; // rax
  unsigned __int16 v12; // ax
  int v13; // eax
  __int64 v14; // rax
  __int16 v15; // dx
  __int16 v16; // cx
  int v17; // eax
  _BYTE v18[64]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v19; // [rsp+60h] [rbp-48h]
  unsigned __int8 v20; // [rsp+C8h] [rbp+20h] BYREF

  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v18, 8u, 0);
  v6 = 0;
  if ( (unsigned int)DxgIsRemoteSession() || (*((_DWORD *)this + 21) & 1) != 0 )
    goto LABEL_5;
  active = CCD_TOPOLOGY::AddActiveNonDesktopPathsToTopology(this, (struct CCD_TOPOLOGY *)v18, a3);
  v8 = active;
  if ( active < 0 )
    goto LABEL_28;
  if ( active == 255 )
  {
LABEL_5:
    LODWORD(v8) = CCD_TOPOLOGY::FunctionalizeWorker(this, a2, a3);
LABEL_6:
    v6 = v8;
    goto LABEL_7;
  }
  if ( v19 )
    v10 = *(_WORD *)(v19 + 20);
  else
    v10 = 0;
  v11 = *((_QWORD *)this + 8);
  if ( v11 )
    v12 = *(_WORD *)(v11 + 20);
  else
    v12 = 0;
  if ( v10 <= v12 )
    WdLogSingleEntry0(1LL);
  v13 = CCD_TOPOLOGY::FunctionalizeWorker((CCD_TOPOLOGY *)v18, a2, a3);
  v8 = v13;
  if ( v13 < 0 )
    goto LABEL_28;
  v20 = 0;
  CCD_TOPOLOGY::RemoveAllNonDesktopPaths((CCD_TOPOLOGY *)v18, &v20);
  if ( !v20 )
    WdLogSingleEntry0(1LL);
  v14 = *((_QWORD *)this + 8);
  v15 = v14 ? *(_WORD *)(v14 + 20) : 0;
  v16 = v19 ? *(_WORD *)(v19 + 20) : 0;
  if ( v15 != v16 )
    WdLogSingleEntry0(1LL);
  v17 = CCD_TOPOLOGY::CopyTopology(this, (const struct CCD_TOPOLOGY *)v18);
  v8 = v17;
  if ( v17 < 0 )
  {
LABEL_28:
    WdLogSingleEntry1(2LL, v8);
    goto LABEL_6;
  }
LABEL_7:
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v18);
  return v6;
}
