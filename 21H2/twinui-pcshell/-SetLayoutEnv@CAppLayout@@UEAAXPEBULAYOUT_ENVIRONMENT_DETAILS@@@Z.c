/*
 * XREFs of ?SetLayoutEnv@CAppLayout@@UEAAXPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1804F2A00
 * Callers:
 *     ?CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z @ 0x1804F0E1C (-CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAppLayout::SetLayoutEnv(CAppLayout *this, const struct LAYOUT_ENVIRONMENT_DETAILS *a2)
{
  RTL_SRWLOCK *v4; // rsi

  v4 = (RTL_SRWLOCK *)((char *)this + 16);
  AcquireSRWLockExclusive((PSRWLOCK)this + 2);
  *(_OWORD *)((char *)this + 24) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 40) = *((_OWORD *)a2 + 1);
  *((_QWORD *)this + 7) = *((_QWORD *)a2 + 4);
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
