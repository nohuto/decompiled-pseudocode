__int64 __fastcall IopInitializeBuiltinDriver(
        unsigned __int16 *a1,
        UNICODE_STRING *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        char **a6)
{
  __int64 v6; // r12
  unsigned __int16 *p_Length; // r13
  unsigned __int16 *v10; // r14
  int inserted; // edi
  char *v12; // rbx
  PVOID *v13; // rdi
  __int64 v14; // rax
  __int64 Pool2; // rax
  unsigned __int16 v16; // cx
  __int64 v17; // rdi
  __int64 v18; // r15
  unsigned __int64 v19; // rax
  _WORD *v20; // rdx
  _WORD *v21; // rdi
  __int64 v22; // rax
  _WORD *i; // rdi
  unsigned __int16 v24; // ax
  _WORD *v25; // r9
  _WORD *v26; // r13
  PVOID v27; // rax
  __int16 v28; // cx
  UNICODE_STRING *v29; // r8
  int v30; // eax
  int v31; // eax
  __int64 v32; // rdx
  PVOID *NewObject; // [rsp+20h] [rbp-79h]
  PVOID Object; // [rsp+50h] [rbp-49h] BYREF
  int v36; // [rsp+58h] [rbp-41h] BYREF
  int v37; // [rsp+5Ch] [rbp-3Dh] BYREF
  HANDLE v38; // [rsp+60h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-31h] BYREF
  _WORD *v40; // [rsp+70h] [rbp-29h]
  _DWORD v41[2]; // [rsp+78h] [rbp-21h] BYREF
  __int64 v42; // [rsp+80h] [rbp-19h]
  unsigned __int16 *v43; // [rsp+88h] [rbp-11h]
  int v44; // [rsp+90h] [rbp-9h]
  int v45; // [rsp+94h] [rbp-5h]
  __int128 v46; // [rsp+98h] [rbp-1h]
  bool v47; // [rsp+F0h] [rbp+57h] BYREF
  UNICODE_STRING *v48; // [rsp+F8h] [rbp+5Fh]

  v48 = a2;
  v6 = 0LL;
  Handle = 0LL;
  Object = 0LL;
  p_Length = &a2->Length;
  v41[1] = 0;
  *a6 = 0LL;
  v10 = a1;
  v45 = 0;
  v38 = 0LL;
  v36 = 0;
  v37 = 0;
  v47 = 0;
  if ( HeadlessGlobals && HeadlessGlobals[1] )
    HdlspKernelAddLogEntry(1u, a1);
  v41[0] = 48;
  v42 = 0LL;
  LOBYTE(a1) = KeGetCurrentThread()->PreviousMode;
  v44 = 80;
  v43 = v10;
  v46 = 0LL;
  inserted = ObCreateObject((int)a1, (int)IoDriverObjectType, (int)v41, 0);
  if ( inserted >= 0 )
  {
    v12 = (char *)Object;
    memset(Object, 0, 0x1A0uLL);
    *((_QWORD *)Object + 6) = (char *)Object + 336;
    *((_QWORD *)v12 + 42) = v12;
    memset64(v12 + 112, (unsigned __int64)IopInvalidDeviceRequest, 0x1CuLL);
    *(_DWORD *)v12 = 22020100;
    *((_QWORD *)v12 + 11) = a3;
    inserted = ObInsertObject(v12, 0LL, 1u, 0, 0LL, &Handle);
    if ( inserted >= 0 )
    {
      Object = 0LL;
      ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &Object, 0LL);
      v13 = (PVOID *)PsLoadedModuleList;
      if ( PsLoadedModuleList == &PsLoadedModuleList || !a4 )
      {
        InbvIndicateProgress();
        if ( !a4 )
        {
LABEL_13:
          *((_DWORD *)v12 + 4) |= 2u;
LABEL_14:
          Pool2 = ExAllocatePool2(64LL, v10[1] + 2LL, 0x344E6F49u);
          v16 = 0;
          v17 = Pool2;
          if ( Pool2 )
          {
            *((_QWORD *)v12 + 8) = Pool2;
            *((_WORD *)v12 + 29) = v10[1];
            *((_WORD *)v12 + 28) = *v10;
            memmove(*((void **)v12 + 8), *((const void **)v10 + 1), v10[1]);
            *(_WORD *)(v17 + 2 * ((unsigned __int64)*v10 >> 1)) = 0;
            v16 = 0;
          }
          v18 = *((_QWORD *)v12 + 6);
          if ( p_Length )
          {
            v19 = *p_Length;
            if ( (_WORD)v19 )
            {
              v20 = (_WORD *)*((_QWORD *)p_Length + 1);
              v21 = &v20[v19 >> 1];
              v22 = 4LL;
              if ( *(v21 - 1) != 92 )
                v22 = 2LL;
              for ( i = &v21[v22 / 0xFFFFFFFFFFFFFFFEuLL]; i != v20; --i )
              {
                if ( *i == 92 )
                {
                  ++i;
                  break;
                }
                v16 += 2;
              }
              v24 = v16 + 2;
              if ( i != v20 )
                v24 = v16;
              Object = (PVOID)v24;
              v25 = (_WORD *)ExAllocatePool2(64LL, v24 + 2LL, 0x344E6F49u);
              v40 = v25;
              v26 = (_WORD *)(v18 + 24);
              if ( v25 )
              {
                v27 = Object;
                v28 = (_WORD)Object + 2;
                *(_QWORD *)(v18 + 32) = v25;
                *(_WORD *)(v18 + 26) = v28;
                *v26 = (_WORD)v27;
                memmove(v25, i, (size_t)v27);
                v29 = v48;
                v40[(unsigned __int64)(unsigned __int16)*v26 >> 1] = 0;
                inserted = IopOpenRegistryKeyEx(&v38, 0LL, v29, 0xF003Fu);
                if ( inserted >= 0 )
                {
                  inserted = PnpPrepareDriverLoading((int)v26, v38, v6, a5, &v36, &v47);
                  NtClose(v38);
                  if ( inserted >= 0 )
                  {
                    p_Length = &v48->Length;
LABEL_32:
                    if ( (v36 & 1) != 0 )
                      *((_DWORD *)v12 + 4) |= 0x100u;
                    if ( v47 )
                      *((_DWORD *)v12 + 4) |= 0x1000u;
                    *((_QWORD *)v12 + 9) = &CmRegistryMachineHardwareDescriptionSystemName;
                    VfDifCaptureDriverEntry((__int64)v12);
                    v30 = KseDriverLoadImage(a4, &v37);
                    inserted = v30;
                    if ( v30 < 0 )
                    {
                      LODWORD(NewObject) = v30;
                      DbgPrintEx(0x65u, 3u, "IOINIT: Built-in driver %wZ blocked with status - 0x%lX\n", v10, NewObject);
                    }
                    else if ( !a4 || !v37 || (inserted = MmReapplyBootPatchImports(*(_QWORD *)(a4 + 48)), inserted >= 0) )
                    {
                      v31 = (*((__int64 (__fastcall **)(char *, unsigned __int16 *))v12 + 11))(v12, p_Length);
                      inserted = v31;
                      if ( v31 < 0 )
                      {
                        if ( v31 == -1073741218 )
                        {
                          LODWORD(NewObject) = -1073741218;
                          DbgPrintEx(
                            0x65u,
                            3u,
                            "IOINIT: Built-in driver %wZ failed to initialize with status - 0x%lX\n",
                            v10,
                            NewObject);
                        }
                        else
                        {
                          LODWORD(NewObject) = v31;
                          DbgPrintEx(
                            0x65u,
                            0,
                            "IOINIT: Built-in driver %wZ failed to initialize with status - 0x%lX\n",
                            v10,
                            NewObject);
                        }
                      }
                      else
                      {
                        VfDifCaptureIoCallbacks((__int64)v12);
                        KseShimDriverIoCallbacks((__int64 *)v12, v32, (a4 + 72) & -(__int64)(a4 != 0));
                      }
                    }
                  }
                }
              }
              else
              {
                *(_QWORD *)(v18 + 32) = 0LL;
                inserted = -1073741670;
                *v26 = 0;
              }
              NtClose(Handle);
              if ( inserted < 0 )
              {
                if ( inserted != -1073741218 )
                  PnpDriverLoadingFailed(0LL, (UNICODE_STRING *)(*((_QWORD *)v12 + 6) + 24LL));
                if ( HeadlessGlobals && HeadlessGlobals[1] )
                  HdlspKernelAddLogEntry(3u, 0LL);
                ObMakeTemporaryObject(v12);
                ObfDereferenceObject(v12);
              }
              else
              {
                IopReadyDeviceObjects((__int64)v12);
                if ( HeadlessGlobals && HeadlessGlobals[1] )
                  HdlspKernelAddLogEntry(2u, 0LL);
                *a6 = v12;
              }
              return (unsigned int)inserted;
            }
          }
          *(_DWORD *)(v18 + 24) = 0;
          *(_QWORD *)(v18 + 32) = 0LL;
          goto LABEL_32;
        }
      }
      else
      {
        while ( !RtlEqualString((const STRING *)(a4 + 88), (const STRING *)(v13 + 11), 1u) )
        {
          v13 = (PVOID *)*v13;
          if ( v13 == &PsLoadedModuleList )
            goto LABEL_10;
        }
        *((_QWORD *)v12 + 5) = v13;
LABEL_10:
        InbvIndicateProgress();
      }
      v6 = *(_QWORD *)(a4 + 48);
      v14 = RtlImageNtHeader(v6);
      *((_QWORD *)v12 + 3) = v6;
      *((_DWORD *)v12 + 8) = *(_DWORD *)(v14 + 80);
      if ( _bittest16((const signed __int16 *)(v14 + 94), 0xDu) )
        goto LABEL_14;
      goto LABEL_13;
    }
  }
  if ( HeadlessGlobals && HeadlessGlobals[1] )
    HdlspKernelAddLogEntry(3u, 0LL);
  return (unsigned int)inserted;
}
