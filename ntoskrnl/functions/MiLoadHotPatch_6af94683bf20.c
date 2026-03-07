__int64 __fastcall MiLoadHotPatch(const void **a1, char a2, int *a3, unsigned int *a4)
{
  struct _KTHREAD *Lock; // r12
  int v8; // eax
  int v9; // ebx
  int v10; // edi
  int v11; // edx
  PVOID v12; // r14
  unsigned int v13; // eax
  _DWORD *HotPatchRecord; // r15
  int v15; // esi
  char v16; // al
  unsigned __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r10
  UNICODE_STRING *SecureImageActivePatch; // rsi
  char v21; // di
  int v22; // eax
  int v24; // [rsp+58h] [rbp-39h] BYREF
  PVOID Object; // [rsp+60h] [rbp-31h] BYREF
  __int64 v26; // [rsp+68h] [rbp-29h] BYREF
  int v27; // [rsp+70h] [rbp-21h]
  HANDLE Handle; // [rsp+78h] [rbp-19h] BYREF
  __int128 v29; // [rsp+80h] [rbp-11h] BYREF
  unsigned int v30; // [rsp+90h] [rbp-1h]
  __int64 v31; // [rsp+98h] [rbp+7h] BYREF
  __int64 v32; // [rsp+A0h] [rbp+Fh]
  PVOID v33; // [rsp+A8h] [rbp+17h]

  v32 = 0LL;
  v30 = 0;
  v24 = 0;
  v31 = 0LL;
  Lock = 0LL;
  Object = 0LL;
  v33 = 0LL;
  Handle = 0LL;
  v26 = 0LL;
  v27 = 1;
  v29 = 0LL;
  v8 = MiOpenHotPatchFile((_DWORD)a1, 1, 0, (unsigned int)&Handle, (__int64)&Object, 0LL, (__int64)&v26);
  v9 = v26;
  v10 = v8;
  if ( v8 < 0 )
    goto LABEL_39;
  if ( (a2 & 8) != 0 )
  {
    if ( *a3 != (_DWORD)v26 || (v11 = *a4, *a4 != HIDWORD(v26)) )
    {
      v10 = -1073740748;
LABEL_6:
      v12 = Object;
LABEL_41:
      MiLogHotPatchOperationStatus(v9, HIDWORD(v26), (_DWORD)a1, v10, 1);
      SecureImageActivePatch = 0LL;
      goto LABEL_42;
    }
  }
  else
  {
    v13 = HIDWORD(v26);
    v11 = HIDWORD(v26);
    *a3 = v26;
    *a4 = v13;
  }
  if ( (a2 & 1) != 0 )
  {
    HotPatchRecord = MiAllocateHotPatchRecord(*a3, v11, a1);
    if ( !HotPatchRecord )
    {
      v10 = -1073741670;
      goto LABEL_6;
    }
    Lock = MmAcquireLoadLock();
    MiInsertHotPatchRecord((unsigned __int64 *)&xmmword_140C694B0, (unsigned __int64)HotPatchRecord, 0);
  }
  else
  {
    Lock = MmAcquireLoadLock();
  }
  v15 = 1073741879;
  if ( (MiFlags & 0x4000) == 0 )
  {
    v12 = Object;
    v21 = a2;
    goto LABEL_35;
  }
  if ( (a2 & 4) == 0 )
  {
    v10 = VslDetermineHotPatchType(*a3, *a4, &v24);
    if ( v10 < 0 )
    {
LABEL_39:
      v12 = Object;
      goto LABEL_40;
    }
  }
  v16 = v24;
  v12 = Object;
  if ( (v24 & 1) != 0 )
  {
    Object = 0LL;
    v10 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    v33 = Object;
    if ( v10 < 0 )
      goto LABEL_40;
    v17 = MiSectionControlArea((__int64)v12);
    v10 = MiPromoteControlAreaToStrongCode(v17, v19, v18, &v31);
    if ( v10 < 0 )
      goto LABEL_40;
    v16 = v24;
  }
  v27 = 0;
  if ( (v16 & 2) != 0 )
  {
    SecureImageActivePatch = MiAllocateSecureImageActivePatch((PCUNICODE_STRING)a1);
    if ( SecureImageActivePatch )
    {
      v10 = VslApplyHotPatch(v31, (__int64)v12, 0LL, 0LL, 0LL, 0LL, 0, (__int64)&v29);
      v32 = v30;
    }
    else
    {
      v10 = -1073741670;
    }
    MiLogHotPatchOperationStatus(v9, HIDWORD(v26), (_DWORD)a1, v10, 2);
    if ( v10 < 0 )
    {
LABEL_42:
      if ( Lock )
        MmReleaseLoadLock((__int64)Lock);
      goto LABEL_44;
    }
    *(_OWORD *)&SecureImageActivePatch[1].Buffer = v29;
    LODWORD(SecureImageActivePatch[2].Buffer) = v32;
    MiInsertSecureImageActivePatch((unsigned __int64)SecureImageActivePatch);
    v15 = v10;
  }
  ObfDereferenceObject(v12);
  v21 = a2;
  v12 = 0LL;
  if ( (a2 & 2) == 0 )
  {
    v22 = MiApplyHotPatchToDriver(*a3, *a4, (__int64)a1, (__int64)Handle);
    if ( v22 == -1073741515 )
    {
      v22 = 1073741879;
    }
    else if ( v22 < 0 )
    {
      v15 = v22;
      goto LABEL_35;
    }
    if ( v15 == 1073741879 )
      v15 = v22;
  }
LABEL_35:
  MmReleaseLoadLock((__int64)Lock);
  Lock = 0LL;
  if ( (v21 & 6) == 0 )
    MiHotPatchAllProcesses(*a3, *a4);
  v10 = v15;
  SecureImageActivePatch = 0LL;
  if ( v27 )
  {
LABEL_40:
    SecureImageActivePatch = 0LL;
    if ( v10 == 1073741879 )
      goto LABEL_42;
    goto LABEL_41;
  }
LABEL_44:
  if ( v12 )
    ObfDereferenceObject(v12);
  if ( v33 )
    ObfDereferenceObject(v33);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  if ( SecureImageActivePatch )
    ExFreePoolWithTag(SecureImageActivePatch, 0);
  return (unsigned int)v10;
}
