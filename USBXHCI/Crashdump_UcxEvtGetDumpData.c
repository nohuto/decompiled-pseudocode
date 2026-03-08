/*
 * XREFs of Crashdump_UcxEvtGetDumpData @ 0x1C004D200
 * Callers:
 *     <none>
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x1C001E754 (CommonBuffer_ReleaseBuffer.c)
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0020400 (memmove.c)
 *     Crashdump_CommonBufferAcquire @ 0x1C004C0B8 (Crashdump_CommonBufferAcquire.c)
 *     Crashdump_FreeDeviceContext @ 0x1C004C300 (Crashdump_FreeDeviceContext.c)
 *     Crashdump_InitializeDeviceContext @ 0x1C004C684 (Crashdump_InitializeDeviceContext.c)
 *     Crashdump_Register_Initialize @ 0x1C004D858 (Crashdump_Register_Initialize.c)
 *     Crashdump_EventRing_InitializeForDump @ 0x1C004E46C (Crashdump_EventRing_InitializeForDump.c)
 */

__int64 __fastcall Crashdump_UcxEvtGetDumpData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r12
  unsigned int v8; // esi
  _QWORD *v9; // r13
  __int64 v10; // rdi
  __int64 v11; // rbp
  _QWORD *Pool2; // rax
  _QWORD *v13; // rbx
  int v14; // edi
  _QWORD **v15; // r14
  int v16; // edx
  const void *v17; // rdi
  int v18; // eax
  __int64 v19; // rax
  _QWORD *v20; // rdx
  _QWORD *v21; // rax
  unsigned int v22; // eax
  unsigned int v23; // ebp
  unsigned int v24; // r12d
  __int64 v25; // r8
  int v26; // edx
  int v27; // edx
  __int64 v30; // [rsp+38h] [rbp-80h]
  __int128 v31; // [rsp+40h] [rbp-78h] BYREF
  __int128 v32; // [rsp+50h] [rbp-68h]
  int v33; // [rsp+60h] [rbp-58h]

  v33 = 0;
  v31 = 0LL;
  v32 = 0LL;
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UcxEvtGetDumpData: Begin\n");
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C00632C0);
  v8 = 0;
  v9 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                   WdfDriverGlobals,
                   a1,
                   off_1C0063428);
  v10 = v9[11];
  v11 = v9[15];
  v30 = v9[17];
  *(_QWORD *)(a4 + 16) = Crashdump_Initialize;
  *(_QWORD *)(a4 + 56) = Crashdump_Cleanup;
  *(_QWORD *)(a4 + 24) = Crashdump_SendUrb;
  *(_QWORD *)(a4 + 48) = Crashdump_ResetDevice;
  *(_QWORD *)(a4 + 32) = Crashdump_SendUrbAsync;
  *(_QWORD *)(a4 + 40) = Crashdump_PollForCompletion;
  *(_BYTE *)(a4 + 84) = 0;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 632LL, 1128482904LL);
  v13 = Pool2;
  if ( !Pool2 )
  {
    v14 = -1073741670;
    goto LABEL_34;
  }
  v15 = (_QWORD **)(Pool2 + 62);
  Pool2[61] = v11;
  Pool2[63] = Pool2 + 62;
  Pool2[62] = Pool2 + 62;
  Crashdump_Register_Initialize(Pool2, v10, v9);
  v14 = Crashdump_EventRing_InitializeForDump(v13 + 9, v13);
  if ( v14 >= 0 )
  {
    v13[25] = v13;
    v13[26] = v13;
    v13[27] = *(_QWORD *)(*v13 + 40LL) + 32LL;
    v13[41] = v13;
    v13[42] = v13;
    v13[43] = *(_QWORD *)(*v13 + 32LL) + 24LL;
    v14 = Crashdump_CommonBufferAcquire((__int64)v13, 32, (__int64)(v13 + 44));
    if ( v14 >= 0 )
    {
      v16 = *(_DWORD *)(a4 + 80);
      if ( !v16 )
        goto LABEL_8;
      v14 = Crashdump_CommonBufferAcquire((__int64)v13, v16, (__int64)(v13 + 74));
      if ( v14 >= 0 )
      {
        *(_QWORD *)(a4 + 64) = v13[75];
        *(_QWORD *)(a4 + 72) = v13[74];
LABEL_8:
        v17 = v13 + 68;
        *((_DWORD *)v13 + 131) = *(_DWORD *)(v7 + 20);
        *(_OWORD *)((char *)v13 + 532) = *(_OWORD *)(v7 + 32);
        *(_OWORD *)((char *)v13 + 548) = *(_OWORD *)(v7 + 48);
        *((_DWORD *)v13 + 141) = *(_DWORD *)(v7 + 64);
        v18 = 20;
        if ( *(_BYTE *)(120LL * (unsigned int)(*((_DWORD *)v13 + 136) - 1) + *(_QWORD *)(v9[19] + 48LL) + 13) != 2 )
          v18 = 30;
        *((_DWORD *)v13 + 132) = v18;
        v19 = ExAllocatePool2(64LL, 376LL * *((unsigned int *)v13 + 134), 1128482904LL);
        v13[71] = v19;
        if ( v19 )
        {
          v22 = *((_DWORD *)v13 + 134);
          if ( v22 )
          {
            v23 = 1;
            while ( 1 )
            {
              v31 = 0LL;
              DWORD1(v31) = v23;
              v33 = 0;
              v24 = v23;
              v32 = 0LL;
              memmove((char *)&v31 + 12, v17, 4LL * v23);
              v25 = a3;
              if ( v23 != *((_DWORD *)v13 + 134) )
                v25 = 0LL;
              v14 = Crashdump_InitializeDeviceContext(v30, (int)v13, v25, (__int64)&v31, v13[71] + 376LL * (v23 - 1));
              if ( v14 < 0 )
                break;
              v22 = *((_DWORD *)v13 + 134);
              v17 = v13 + 68;
              ++v23;
              if ( v24 >= v22 )
                goto LABEL_26;
            }
          }
          else
          {
LABEL_26:
            v13[72] = v13[71] + 376LL * (v22 - 1);
            v14 = Crashdump_CommonBufferAcquire((__int64)v13, 64, (__int64)(v13 + 55));
            if ( v14 >= 0 )
            {
              v26 = 2112;
              if ( (*(_DWORD *)(*v13 + 104LL) & 4) == 0 )
                v26 = 1056;
              v14 = Crashdump_CommonBufferAcquire((__int64)v13, v26, (__int64)(v13 + 58));
              if ( v14 >= 0 )
              {
                v27 = *((_DWORD *)v13 + 134);
                *((_DWORD *)v13 + 102) = v27;
                v14 = Crashdump_CommonBufferAcquire((__int64)v13, 8 * v27 + 8, (__int64)(v13 + 52));
                if ( v14 >= 0 )
                {
                  DbgPrintEx(
                    0x93u,
                    3u,
                    "XHCIDUMP: CommonBuffer: Allocated %u pages, %u bytes. Used %u bytes\n",
                    *((_DWORD *)v13 + 128),
                    *((_DWORD *)v13 + 128) << 12,
                    *((_DWORD *)v13 + 129));
                  *((_DWORD *)v13 + 146) = 0;
                  v14 = 0;
                  *(_QWORD *)(a4 + 8) = v13;
                  v13[77] = v9;
                  v9[53] = v13;
                  goto LABEL_34;
                }
              }
            }
          }
        }
        else
        {
          v14 = -1073741670;
        }
      }
    }
  }
  if ( v13[71] )
  {
    if ( *((_DWORD *)v13 + 134) )
    {
      do
        Crashdump_FreeDeviceContext(v13[71] + 376LL * v8++);
      while ( v8 < *((_DWORD *)v13 + 134) );
    }
    ExFreePoolWithTag((PVOID)v13[71], 0x43434858u);
  }
  while ( 1 )
  {
    v20 = *v15;
    if ( *v15 == v15 )
      break;
    if ( (_QWORD **)v20[1] != v15 || (v21 = (_QWORD *)*v20, *(_QWORD **)(*v20 + 8LL) != v20) )
      __fastfail(3u);
    *v15 = v21;
    v21[1] = v15;
    CommonBuffer_ReleaseBuffer(v13[61], (__int64)v20);
  }
  ExFreePoolWithTag(v13, 0x43434858u);
LABEL_34:
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UcxEvtGetDumpData: End 0x%X\n", v14);
  return (unsigned int)v14;
}
