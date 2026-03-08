/*
 * XREFs of ?DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C030B320
 * Callers:
 *     DxgkEscape @ 0x1C01A3EE0 (DxgkEscape.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgEscapeEvictByNtHandle(struct _D3DKMT_VIDMM_ESCAPE *a1)
{
  unsigned int v2; // ebx
  HANDLE hProcess; // rcx
  NTSTATUS v4; // eax
  _QWORD *v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdx
  _QWORD **v8; // rax
  _QWORD *v9; // r14
  PVOID Object; // [rsp+50h] [rbp-B8h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v13[144]; // [rsp+60h] [rbp-A8h] BYREF

  v2 = 0;
  hProcess = a1->SuspendProcess.hProcess;
  if ( hProcess )
  {
    HandleInformation = 0LL;
    Object = 0LL;
    v4 = ObReferenceObjectByHandle(
           hProcess,
           0x20000u,
           g_pDxgkSharedAllocationObjectType,
           1,
           &Object,
           &HandleInformation);
    v2 = v4;
    if ( v4 < 0 )
    {
      WdLogSingleEntry2(3LL, a1->EvictByNtHandle.NtHandle, v4);
      return v2;
    }
    v5 = Object;
    v6 = *((_QWORD *)Object + 2);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 80);
      if ( v7 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v13, *(struct DXGADAPTER *const *)(v7 + 16), 0LL);
        v2 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v13, 0LL);
        if ( (v2 & 0x80000000) != 0 )
        {
          ObfDereferenceObject(v5);
LABEL_10:
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v13);
          return v2;
        }
        if ( *(int *)(*(_QWORD *)(*(_QWORD *)(v6 + 80) + 16LL) + 2820LL) >= 2000 )
        {
          WdLogSingleEntry1(2LL, 565LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Evict By NT Handle Case not supported in WDDM2.x\n",
            565LL,
            0LL,
            0LL,
            0LL,
            0LL);
          ObfDereferenceObject(v5);
          v2 = -1073741595;
          goto LABEL_10;
        }
        v8 = (_QWORD **)(v5[2] + 136LL);
        v9 = *v8;
        while ( v9 != v8 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 80) + 760LL)
                                                                             + 8LL)
                                                                 + 720LL))(
            *(_QWORD *)(*(_QWORD *)(v6 + 80) + 768LL),
            0LL,
            *(v9 - 5),
            0LL);
          v9 = (_QWORD *)*v9;
          v8 = (_QWORD **)(v5[2] + 136LL);
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v13);
      }
    }
    ObfDereferenceObject(v5);
  }
  return v2;
}
