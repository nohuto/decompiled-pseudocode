/*
 * XREFs of ?BackPropagateLargeBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z @ 0x1C0140128
 * Callers:
 *     ?UMPDDrvCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x1C02B8D90 (-UMPDDrvCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C007E800 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0080520 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??1MALLOCOBJ@@QEAA@XZ @ 0x1C0089BD8 (--1MALLOCOBJ@@QEAA@XZ.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C0114FA8 (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     wil::scope_exit__lambda_7684baa8fa620ec8aa6115923601a5ea___ @ 0x1C013EE6C (wil--scope_exit__lambda_7684baa8fa620ec8aa6115923601a5ea___.c)
 *     memmove @ 0x1C0141300 (memmove.c)
 */

void __fastcall UMPDOBJ::BackPropagateLargeBitmapBits(UMPDOBJ *this, struct _SURFOBJ *a2, void *a3, int a4)
{
  void *v7; // rcx
  ULONG *p_cjBits; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  void *v11; // rbx
  void *Src; // [rsp+20h] [rbp-A8h] BYREF
  PEPROCESS Process; // [rsp+28h] [rbp-A0h] BYREF
  PVOID *v14; // [rsp+30h] [rbp-98h] BYREF
  char v15; // [rsp+38h] [rbp-90h]
  _BYTE v16[8]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v17[3]; // [rsp+48h] [rbp-80h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-68h] BYREF

  if ( a4 )
  {
    v17[1] = a3;
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v16, (UMPDOBJ *)((char *)this + 384));
    v7 = (void *)*((_QWORD *)this + 49);
    if ( v7 )
    {
      ObfReferenceObject(v7);
      Process = (PEPROCESS)*((_QWORD *)this + 49);
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v16);
      v17[0] = &Process;
      wil::scope_exit__lambda_7684baa8fa620ec8aa6115923601a5ea___((__int64)&v14, v17);
      if ( PsGetProcessId(Process) == *(HANDLE *)(*((_QWORD *)this + 51) + 16LL) )
      {
        p_cjBits = &a2->cjBits;
        v17[2] = &a2->cjBits;
        MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&Src, a2->cjBits);
        v11 = Src;
        if ( Src )
        {
          memset(&ApcState, 0, sizeof(ApcState));
          KeStackAttachProcess(Process, &ApcState);
          memmove(v11, a2->pvBits, *p_cjBits);
          KeUnstackDetachProcess(&ApcState);
          memmove(a3, v11, *p_cjBits);
        }
        MALLOCOBJ::~MALLOCOBJ((MALLOCOBJ *)&Src, v9, v10);
      }
      if ( v15 )
        ObfDereferenceObject(*v14);
    }
    else
    {
      PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v16);
    }
  }
}
