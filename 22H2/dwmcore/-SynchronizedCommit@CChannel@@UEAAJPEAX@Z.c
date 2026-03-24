/*
 * XREFs of ?SynchronizedCommit@CChannel@@UEAAJPEAX@Z @ 0x180027F80
 * Callers:
 *     ?SynchronizeChannel@CInternalMilCmdConnection@@QEAAJI@Z @ 0x180027BE8 (-SynchronizeChannel@CInternalMilCmdConnection@@QEAAJI@Z.c)
 *     ?Commit@CChannel@@UEAAJXZ @ 0x180027F70 (-Commit@CChannel@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x1800E7F5C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CChannel::SynchronizedCommit(CChannel *this, unsigned __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  unsigned __int64 v5; // rcx
  int v6; // edi
  unsigned int v7; // r14d
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // r15
  unsigned int v14; // ebx
  unsigned int v15; // ecx
  _DWORD v16[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+38h] [rbp-40h]
  int v18; // [rsp+40h] [rbp-38h]
  int v19; // [rsp+44h] [rbp-34h]
  unsigned __int64 v20; // [rsp+48h] [rbp-30h]
  __int64 v21; // [rsp+50h] [rbp-28h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v5 = *((_QWORD *)this + 20);
  v6 = 0;
  if ( __PAIR128__(v5, a2) == 0 )
    goto LABEL_2;
  v9 = *((_DWORD *)this + 14);
  v17 = 0LL;
  v19 = 0;
  v21 = 0LL;
  v18 = v9;
  v10 = *((_QWORD *)this + 6);
  v20 = v5;
  v16[1] = 40;
  v16[0] = 8;
  v11 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, unsigned __int64))(**(_QWORD **)(v10 + 40) + 8LL))(
          *(_QWORD *)(v10 + 40),
          v16,
          a2);
  v6 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x122u, 0LL);
  else
    *((_QWORD *)this + 20) = 0LL;
  if ( v6 >= 0 )
  {
LABEL_2:
    v7 = *((_DWORD *)this + 3);
    EnterCriticalSection(&g_csCompositionEngine);
    if ( v7 )
    {
      v13 = *((_QWORD *)this + 5);
      do
      {
        v14 = *(_DWORD *)(v13 + 12LL * v7 + 8);
        memset_0((void *)(*((_QWORD *)this + 5) + v7 * *((_DWORD *)this + 6)), 0, *((unsigned int *)this + 6));
        v7 = v14;
      }
      while ( v14 );
    }
    LeaveCriticalSection(&g_csCompositionEngine);
    *((_DWORD *)this + 3) = 0;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v6, 0x137u, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v6, 0x1FFu, 0LL);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)v6;
}
