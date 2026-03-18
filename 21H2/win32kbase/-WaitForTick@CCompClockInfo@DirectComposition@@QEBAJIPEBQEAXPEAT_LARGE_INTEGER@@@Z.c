/*
 * XREFs of ?WaitForTick@CCompClockInfo@DirectComposition@@QEBAJIPEBQEAXPEAT_LARGE_INTEGER@@@Z @ 0x1C0211090
 * Callers:
 *     NtDCompositionWaitForCompositorClock @ 0x1C0212230 (NtDCompositionWaitForCompositorClock.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

__int64 __fastcall DirectComposition::CCompClockInfo::WaitForTick(
        DirectComposition::CCompClockInfo *this,
        unsigned int a2,
        void *const *a3,
        union _LARGE_INTEGER *a4)
{
  __int64 v6; // rdi
  __int64 v8; // rbp
  void *v9; // rcx
  NTSTATUS v10; // esi
  PVOID *v11; // rbx
  PVOID Object; // [rsp+40h] [rbp-158h] BYREF
  _QWORD v14[32]; // [rsp+50h] [rbp-148h] BYREF

  v6 = a2;
  if ( *((_DWORD *)this + 4) )
  {
    memset(v14, 0, sizeof(v14));
    v8 = 0LL;
    while ( (unsigned int)v8 < (unsigned int)v6 )
    {
      v9 = a3[v8];
      Object = 0LL;
      v10 = ObReferenceObjectByHandle(v9, 0x100000u, 0LL, 1, &Object, 0LL);
      v14[v8] = Object;
      v8 = (unsigned int)(v8 + 1);
      if ( v10 < 0 )
        goto LABEL_7;
    }
    v10 = DxgkWaitForVerticalBlankEventInternal(
            *((unsigned int *)this + 4),
            0LL,
            *((unsigned int *)this + 3),
            (unsigned int)v6,
            v14,
            a4,
            1);
LABEL_7:
    if ( (_DWORD)v6 )
    {
      v11 = (PVOID *)v14;
      do
      {
        if ( *v11 )
          ObfDereferenceObject(*v11);
        ++v11;
        --v6;
      }
      while ( v6 );
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v10;
}
