/*
 * XREFs of ?ShouldDefer@CBatch@DirectComposition@@QEAA_N_J_NPEAVCEvent@2@PEAW4DeferReason@12@@Z @ 0x1C000C38C
 * Callers:
 *     ?KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z @ 0x1C000C25C (-KeepOrDeferBatches@CConnection@DirectComposition@@AEAAX_KPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C000C9A4 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 */

bool __fastcall DirectComposition::CBatch::ShouldDefer(
        DirectComposition::CBatch *this,
        __int64 a2,
        char a3,
        struct DirectComposition::CEvent *a4,
        enum DirectComposition::CBatch::DeferReason *a5)
{
  __int64 v8; // rax
  __int64 v9; // rbp
  int v10; // edi
  __int64 v11; // rax
  bool result; // al
  struct _KEVENT *v13; // rcx
  void *v14; // rcx
  unsigned int v15; // edx
  DirectComposition::CEvent *v16; // rcx
  char v17; // cl
  union _LARGE_INTEGER Timeout; // [rsp+50h] [rbp+8h] BYREF

  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 49LL) )
  {
    v10 = 1;
    goto LABEL_15;
  }
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 242LL) )
  {
    v10 = 2;
LABEL_12:
    if ( a4 )
    {
      v13 = (struct _KEVENT *)*((_QWORD *)a4 + 1);
LABEL_14:
      KeSetEvent(v13, 1, 0);
    }
    goto LABEL_15;
  }
  v8 = *((_QWORD *)this + 8);
  if ( v8 && a2 && v8 - a2 > 0 )
  {
    v10 = 3;
    goto LABEL_12;
  }
  if ( *((_QWORD *)this + 5) && *((int *)this + 12) > 0 )
  {
    v10 = 4;
  }
  else
  {
    v9 = *((_QWORD *)this + 13);
    v10 = 6;
    while ( v9 )
    {
      v14 = *(void **)(v9 + 8);
      Timeout.QuadPart = 0LL;
      if ( KeWaitForSingleObject(v14, UserRequest, 0, 0, &Timeout) )
      {
        v10 = 5;
        if ( !a4 )
          goto LABEL_15;
        goto LABEL_23;
      }
      v16 = (DirectComposition::CEvent *)*((_QWORD *)this + 13);
      v9 = *(_QWORD *)v16;
      if ( v16 )
        DirectComposition::CEvent::`scalar deleting destructor'(v16, v15);
      *((_QWORD *)this + 13) = v9;
    }
    v11 = *((_QWORD *)this + 12);
    if ( !v11 )
      return 0;
    v17 = *(_BYTE *)(v11 + 33);
    if ( v17 )
    {
      if ( *(int *)(v11 + 36) <= 0 )
        return 0;
    }
    if ( a4 && !v17 )
    {
LABEL_23:
      v13 = (struct _KEVENT *)*((_QWORD *)a4 + 1);
      goto LABEL_14;
    }
  }
LABEL_15:
  if ( a3 )
    *(_BYTE *)(*((_QWORD *)this + 1) + 49LL) = 1;
  result = 1;
  *(_DWORD *)a5 = v10;
  return result;
}
