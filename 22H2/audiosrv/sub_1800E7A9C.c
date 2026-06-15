/*
 * XREFs of sub_1800E7A9C @ 0x1800E7A9C
 * Callers:
 *     sub_1800E7CD0 @ 0x1800E7CD0 (sub_1800E7CD0.c)
 *     sub_1800E7D10 @ 0x1800E7D10 (sub_1800E7D10.c)
 *     sub_1800E7D50 @ 0x1800E7D50 (sub_1800E7D50.c)
 *     sub_1800E8F90 @ 0x1800E8F90 (sub_1800E8F90.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CD4DC @ 0x1800CD4DC (sub_1800CD4DC.c)
 *     sub_1800E7160 @ 0x1800E7160 (sub_1800E7160.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800E7A9C(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 **v5; // r14
  struct _RTL_CRITICAL_SECTION *v6; // r12
  __int64 v7; // rdx
  unsigned int v8; // r13d
  __int64 *i; // rdi
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // rcx
  _QWORD v19[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v20; // [rsp+80h] [rbp+48h] BYREF
  __int64 v21; // [rsp+88h] [rbp+50h]
  __int64 v22; // [rsp+90h] [rbp+58h] BYREF
  __int64 v23; // [rsp+98h] [rbp+60h] BYREF

  v21 = a2;
  v5 = (__int64 **)(a1 + 88);
  *a3 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v19[1] = v6;
  v8 = 0;
  while ( 2 )
  {
    if ( !*a3 )
    {
      for ( i = *v5; i != v5[1]; ++i )
      {
        v10 = *i;
        v23 = v10;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
        v20 = 0LL;
        v11 = sub_1800CD4DC(&v23, &v20);
        v12 = v20;
        if ( v11 >= 0 && v20 )
        {
          v22 = 0LL;
          if ( (int)sub_1800E7160(&v20, &v22) >= 0 )
          {
            v19[0] = v22;
            v13 = *(_QWORD *)(a2 + 56);
            if ( !v13 )
            {
              std::_Xbad_function_call();
              __debugbreak();
              return `Concurrency::details::UMSThreadScheduler::VirtualProcessorActiveNotification'::`1'::dtor$0();
            }
            if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v13 + 16LL))(v13, v19) )
            {
              v14 = v22;
              v22 = 0LL;
              *a3 = v14;
              sub_1800461B8(&v22);
              v15 = v20;
              if ( v20 )
              {
                v20 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
              }
              if ( v10 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
              break;
            }
          }
          sub_1800461B8(&v22);
          v12 = v20;
        }
        if ( v12 )
        {
          v20 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      ++v8;
      v5 += 3;
      if ( v8 < 4 )
        continue;
    }
    break;
  }
  v16 = *a3 == 0 ? 0x887C001A : 0;
  if ( v6 )
    LeaveCriticalSection(v6);
  v17 = *(_QWORD *)(a2 + 56);
  if ( v17 )
  {
    LOBYTE(v7) = v17 != a2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 32LL))(v17, v7);
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  return v16;
}
