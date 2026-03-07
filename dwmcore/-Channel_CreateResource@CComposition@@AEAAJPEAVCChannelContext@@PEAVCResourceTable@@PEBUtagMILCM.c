__int64 __fastcall CComposition::Channel_CreateResource(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_CREATERESOURCE *a4)
{
  unsigned int v4; // edi
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // edx
  _QWORD *v16; // r8
  __int64 v17; // rax
  unsigned int *v18; // r14
  unsigned int v19; // eax
  unsigned int v20; // r8d
  _QWORD *v21; // rdi
  unsigned int v23; // ecx
  unsigned int v24; // [rsp+20h] [rbp-38h]
  _QWORD *v25; // [rsp+70h] [rbp+18h] BYREF

  v4 = *((_DWORD *)a4 + 1);
  v25 = 0LL;
  v9 = HANDLE_TABLE::AssignEntry((struct CResourceTable *)((char *)a3 + 16), v4, *((_DWORD *)a4 + 2));
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x2Au, 0LL);
LABEL_21:
    v21 = 0LL;
    ReleaseInterface<CResource>(&v25);
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v11, 0x627u, 0LL);
    goto LABEL_11;
  }
  v12 = *((_QWORD *)a3 + 5) + *((_DWORD *)a3 + 6) * v4;
  *(_QWORD *)(v12 + 8) = 0LL;
  v13 = CResourceFactory::Create(this, a2, *((unsigned int *)a4 + 2), &v25);
  v11 = v13;
  if ( v13 < 0 )
  {
    v24 = 47;
    goto LABEL_17;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD *))(*v25 + 48LL))(v25);
  v11 = v13;
  if ( v13 < 0 )
  {
    v24 = 53;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, v24, 0LL);
LABEL_18:
    if ( v12 )
      CResourceTable::DeleteHandle(a3, *((_DWORD *)a4 + 1));
    goto LABEL_21;
  }
  v15 = *((_DWORD *)a4 + 1);
  v11 = -2147024890;
  v16 = v25;
  if ( !v15
    || v15 >= *((_DWORD *)a3 + 7)
    || (v17 = *((_QWORD *)a3 + 5), v14 = *((_DWORD *)a3 + 6) * v15, !*(_DWORD *)(v14 + v17))
    || (v18 = (unsigned int *)(v17 + *((_DWORD *)a3 + 6) * v15)) == 0LL )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024890, 0x36u, 0LL);
    goto LABEL_18;
  }
  *((_QWORD *)v18 + 1) = v25;
  (*(void (__fastcall **)(_QWORD *))(*v16 + 8LL))(v16);
  v19 = AddToResourceCount(*((_QWORD *)a3 + 7) + 44LL, *v18, 1LL);
  anonymous_namespace_::AddToResourceCount(v19, v20);
  v25[6] = a2;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) != 0 )
    McTemplateU0qqxqx_EventWriteTransfer(
      *((_DWORD *)a4 + 1),
      *((_DWORD *)a4 + 1),
      *((_DWORD *)a2 + 4),
      *((_DWORD *)a4 + 1),
      *((_DWORD *)a4 + 1),
      *((_DWORD *)a4 + 2),
      (char)v25);
  v21 = v25;
  v25 = 0LL;
  v11 = 0;
LABEL_11:
  if ( v21 )
    (*(void (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
  return v11;
}
