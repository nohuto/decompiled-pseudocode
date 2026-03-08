/*
 * XREFs of NtLoadEnclaveData @ 0x140A3C600
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402666A0 (PsReferencePrimaryTokenWithTag.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     MiUnlockAndDereferenceVad @ 0x14031EDC0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x14031EFE0 (MiObtainReferencedVadEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1407C2D40 (ObpReferenceObjectByHandleWithTag.c)
 *     DbgkMapViewOfSection @ 0x1407D2C6C (DbgkMapViewOfSection.c)
 *     MiCopyPagesIntoEnclave @ 0x140A3A34C (MiCopyPagesIntoEnclave.c)
 *     MiDereferenceEnclaveModule @ 0x140A3B18C (MiDereferenceEnclaveModule.c)
 *     MiLoadDataIntoVsmEnclave @ 0x140A3B45C (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140A3B820 (MiLoadSectionIntoVsmEnclave.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtLoadEnclaveData(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        void *a3,
        SIZE_T a4,
        int a5,
        char *Src,
        size_t Size,
        unsigned __int64 a8,
        _DWORD *a9)
{
  SIZE_T v9; // rdi
  ULONG_PTR v10; // r11
  char *v11; // r9
  struct _MDL *Pool; // r14
  _QWORD *v13; // r15
  char PreviousMode; // r10
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // edi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR Process; // rbx
  PVOID v20; // r12
  ULONG_PTR v21; // rax
  void *v22; // rbx
  int v23; // r12d
  ULONG_PTR v24; // rbx
  volatile signed __int32 *v25; // rbx
  __int64 Tag; // [rsp+20h] [rbp-188h]
  KPROCESSOR_MODE v28; // [rsp+60h] [rbp-148h]
  int v29; // [rsp+64h] [rbp-144h] BYREF
  int v30; // [rsp+68h] [rbp-140h]
  ULONG_PTR v31; // [rsp+70h] [rbp-138h]
  int v32; // [rsp+78h] [rbp-130h]
  PVOID Object; // [rsp+80h] [rbp-128h] BYREF
  __int64 v34; // [rsp+88h] [rbp-120h] BYREF
  __int64 v35; // [rsp+90h] [rbp-118h]
  PVOID v36; // [rsp+98h] [rbp-110h]
  __int64 v37; // [rsp+A0h] [rbp-108h] BYREF
  PVOID P; // [rsp+A8h] [rbp-100h]
  SIZE_T v39; // [rsp+B0h] [rbp-F8h]
  PVOID Base; // [rsp+B8h] [rbp-F0h]
  __int64 v41; // [rsp+C0h] [rbp-E8h] BYREF
  _QWORD *v42; // [rsp+C8h] [rbp-E0h]
  _DWORD *v43; // [rsp+D0h] [rbp-D8h]
  char *v44; // [rsp+D8h] [rbp-D0h]
  ULONG_PTR v45; // [rsp+F0h] [rbp-B8h]
  unsigned __int64 v46; // [rsp+F8h] [rbp-B0h]
  $115DCDF994C6370D29323EAB0E0C9502 v47; // [rsp+110h] [rbp-98h] BYREF
  _BYTE v48[32]; // [rsp+140h] [rbp-68h] BYREF

  v9 = a4;
  v39 = a4;
  Base = a3;
  v35 = a2;
  v10 = BugCheckParameter1;
  v31 = BugCheckParameter1;
  v42 = (_QWORD *)a8;
  v45 = BugCheckParameter1;
  v11 = Src;
  v44 = Src;
  v32 = Size;
  v46 = a8;
  v43 = a9;
  memset(&v47, 0, sizeof(v47));
  v29 = 0;
  v37 = 0LL;
  LODWORD(v34) = 0;
  Pool = 0LL;
  v13 = 0LL;
  v30 = 0;
  LODWORD(v36) = 0;
  Object = 0LL;
  v41 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v28 = PreviousMode;
  if ( PreviousMode == 1 )
  {
    if ( a9 )
    {
      v15 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a9 < 0x7FFFFFFF0000LL )
        v15 = (__int64)a9;
      *(_DWORD *)v15 = *(_DWORD *)v15;
    }
    if ( a8 )
    {
      v16 = 0x7FFFFFFF0000LL;
      if ( a8 < 0x7FFFFFFF0000LL )
        v16 = a8;
      *(_QWORD *)v16 = *(_QWORD *)v16;
    }
  }
  if ( (_DWORD)Size )
  {
    if ( (unsigned int)Size > 0xFFFF )
    {
LABEL_12:
      v17 = -1073741820;
LABEL_41:
      v29 = v17;
      goto LABEL_42;
    }
    if ( (unsigned int)Size > 0x20 )
    {
      Pool = (struct _MDL *)MiAllocatePool(64, (unsigned int)Size, 0x49506E45u);
      P = Pool;
      if ( !Pool )
      {
        v17 = -1073741670;
        goto LABEL_41;
      }
      v11 = v44;
      PreviousMode = v28;
    }
    else
    {
      Pool = (struct _MDL *)v48;
      P = v48;
    }
    if ( PreviousMode == 1
      && ((unsigned __int64)&v11[(unsigned int)Size] > 0x7FFFFFFF0000LL || &v11[(unsigned int)Size] < v11) )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(Pool, v11, (unsigned int)Size);
    v9 = v39;
    PreviousMode = v28;
    v10 = v31;
  }
  if ( (v35 & 0xFFF) != 0 )
  {
    v17 = -1073741584;
    goto LABEL_41;
  }
  if ( (v9 & 0xFFF) != 0 )
  {
LABEL_26:
    v17 = -1073741582;
    goto LABEL_41;
  }
  CurrentThread = KeGetCurrentThread();
  Process = (ULONG_PTR)CurrentThread->ApcState.Process;
  if ( v10 == -1LL )
  {
    Object = CurrentThread->ApcState.Process;
    goto LABEL_31;
  }
  v17 = ObpReferenceObjectByHandleWithTag(v10, 8, (__int64)PsProcessType, PreviousMode, 0x6D566D4Du, &Object, 0LL, 0LL);
  v29 = v17;
  if ( v17 >= 0 )
  {
    v9 = v39;
LABEL_31:
    v20 = Object;
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v47);
    v30 = 1;
    v21 = MiObtainReferencedVadEx(v35, 0, &v29);
    v13 = (_QWORD *)v21;
    if ( !v21 || (*(_DWORD *)(v21 + 48) & 0x6200000) != 0x4200000 )
    {
      v17 = -1073741800;
      goto LABEL_41;
    }
    if ( (*(_DWORD *)(v21 + 64) & 1) == 0 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v21 + 72) + 76LL) )
      {
        v17 = MiLoadDataIntoVsmEnclave(
                (__int64)Object,
                Process,
                v21,
                v28,
                v35,
                v32,
                (int *)Pool,
                (unsigned __int64)Base,
                v9,
                a5,
                &v37);
      }
      else
      {
        v22 = (void *)PsReferencePrimaryTokenWithTag(Process, 0x746C6644u);
        v17 = MiLoadSectionIntoVsmEnclave((__int64)v20, v13, v28, (__int64)v22, v35, v32, Pool, &v41);
        v13 = 0LL;
        ObfDereferenceObject(v22);
      }
      goto LABEL_41;
    }
    if ( v32 )
      goto LABEL_12;
    if ( v9 )
    {
      KiUnstackDetachProcess(&v47);
      v23 = 0;
      v17 = MiCopyPagesIntoEnclave(
              (_KPROCESS *)Object,
              (__int64)v13,
              v28,
              v35,
              (unsigned __int64)Base,
              v9,
              a5,
              &v37,
              &v34);
      v29 = v17;
      goto LABEL_43;
    }
    goto LABEL_26;
  }
LABEL_42:
  v23 = v30;
LABEL_43:
  v24 = v31;
  if ( v13 )
    MiUnlockAndDereferenceVad(v13);
  if ( v23 )
    KiUnstackDetachProcess(&v47);
  if ( Object && v24 != -1LL )
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  if ( Pool && Pool != (struct _MDL *)v48 )
    ExFreePoolWithTag(Pool, 0);
  v25 = (volatile signed __int32 *)v41;
  if ( v41 )
  {
    DbgkMapViewOfSection(
      (_KPROCESS *)Object,
      0LL,
      *(_QWORD *)(v41 + 16),
      (__int64)v11,
      Tag,
      *(_DWORD *)(v41 + 36),
      *(_DWORD *)(v41 + 40));
    MiDereferenceEnclaveModule(v25);
  }
  if ( v42 )
    *v42 = v37;
  if ( a9 )
    *a9 = v34;
  return (unsigned int)v17;
}
