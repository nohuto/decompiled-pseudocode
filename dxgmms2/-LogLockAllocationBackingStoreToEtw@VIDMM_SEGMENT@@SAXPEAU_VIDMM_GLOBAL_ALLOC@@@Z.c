/*
 * XREFs of ?LogLockAllocationBackingStoreToEtw@VIDMM_SEGMENT@@SAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00FDCA8
 * Callers:
 *     ?ReportSegmentState@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00FF1BC (-ReportSegmentState@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0xxqXR2_EtwWriteTransfer @ 0x1C0032EF8 (McTemplateK0xxqXR2_EtwWriteTransfer.c)
 */

void __fastcall VIDMM_SEGMENT::LogLockAllocationBackingStoreToEtw(
        struct _VIDMM_GLOBAL_ALLOC *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r14
  struct _VIDMM_GLOBAL_ALLOC *v4; // rbx
  __int64 v5; // rsi
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r15
  __int64 i; // rdi
  unsigned int v10; // ebp
  __int64 *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // [rsp+28h] [rbp-250h]
  _BYTE v15[512]; // [rsp+50h] [rbp-228h] BYREF

  v3 = 0LL;
  v4 = a1;
  if ( bTracingEnabled )
  {
    v5 = 0LL;
    if ( (*((_DWORD *)a1 + 18) & 0xA000) != 0 )
    {
      v5 = *((_QWORD *)a1 + 69);
    }
    else
    {
      v6 = (_QWORD *)*((_QWORD *)a1 + 11);
      if ( v6 )
      {
        a2 = v6[3];
        if ( a2 )
        {
          v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v6[1] + 24LL) + 88LL))(*(_QWORD *)(v6[1] + 24LL));
        }
        else
        {
          v7 = v6[10];
          if ( v7 )
            v5 = *(_QWORD *)(v7 + 8);
        }
        a1 = *(struct _VIDMM_GLOBAL_ALLOC **)(*((_QWORD *)v4 + 11) + 8LL);
        v3 = *((_QWORD *)a1 + 1);
      }
      else
      {
        v5 = *(_QWORD *)(*((_QWORD *)a1 + 12) + 8LL);
      }
    }
    if ( v5 )
    {
      v8 = 0LL;
      for ( i = *((_QWORD *)v4 + 1) >> 12; (_DWORD)i; LODWORD(i) = i - v10 )
      {
        if ( (unsigned int)i >= 0x40 )
          v10 = 64;
        else
          v10 = i;
        v11 = (__int64 *)v15;
        v12 = v10;
        do
        {
          v13 = *(_QWORD *)(v5 + 8 * v8 + 48);
          v8 = (unsigned int)(v8 + 1);
          *v11++ = v13;
          --v12;
        }
        while ( v12 );
        if ( (byte_1C00769C1 & 0x10) != 0 )
        {
          LODWORD(v14) = v10;
          McTemplateK0xxqXR2_EtwWriteTransfer(v13, (__int64)v11, 0LL, v3, v4, v14, v15);
        }
      }
    }
    else if ( (byte_1C00769C1 & 0x10) != 0 )
    {
      McTemplateK0xxqXR2_EtwWriteTransfer((__int64)a1, a2, a3, v3, v4, 0, 0LL);
    }
  }
}
