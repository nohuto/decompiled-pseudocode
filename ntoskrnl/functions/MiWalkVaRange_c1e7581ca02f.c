__int64 __fastcall MiWalkVaRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // r13
  unsigned int v8; // edi
  __int64 v9; // r12
  ULONG_PTR v10; // rsi
  unsigned __int64 v11; // r15
  __int64 v12; // rbx
  int v13; // r9d
  unsigned __int8 v14; // r14
  int v15; // eax
  unsigned __int64 NextPageTable; // rbx
  unsigned int v17; // r14d
  __int64 ProtoPteAddress; // rdi
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rbx
  __int64 v22; // r13
  int v23; // eax
  int v24; // edi
  int v25; // ebx
  unsigned __int64 v26; // rdx
  int v27; // r13d
  __int64 v29; // rdi
  int v30; // r9d
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdi
  unsigned __int8 v34; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int8 v35; // [rsp+41h] [rbp-BFh]
  int ProtoLeafValid; // [rsp+44h] [rbp-BCh]
  int v37; // [rsp+48h] [rbp-B8h]
  __int64 v38; // [rsp+50h] [rbp-B0h]
  int v39; // [rsp+58h] [rbp-A8h]
  int v40; // [rsp+5Ch] [rbp-A4h]
  _BYTE v41[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+68h] [rbp-98h]
  unsigned __int64 *v43; // [rsp+70h] [rbp-90h]
  unsigned __int64 v44; // [rsp+78h] [rbp-88h]
  int v45; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v46; // [rsp+88h] [rbp-78h] BYREF
  __int64 v47; // [rsp+90h] [rbp-70h] BYREF
  _KPROCESS *Process; // [rsp+98h] [rbp-68h]
  _QWORD v49[24]; // [rsp+A0h] [rbp-60h] BYREF

  v42 = a3;
  v5 = a3;
  v46 = 0LL;
  v45 = 0;
  v47 = 0LL;
  v39 = a4;
  memset(v49, 0, 0xB8uLL);
  ProtoLeafValid = 0;
  v8 = 0;
  v38 = 0LL;
  v9 = 0LL;
  v34 = 17;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  LODWORD(v49[0]) = 1;
  WORD2(v49[0]) = 0;
  v11 = 0LL;
  v49[2] = 0LL;
  LODWORD(v49[1]) = 20;
  v49[3] = 0LL;
  v44 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v12 = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
  v43 = &Process[1].ActiveProcessors.StaticBitmap[26];
  v14 = MiLockWorkingSetShared(&Process[1].ActiveProcessors.StaticBitmap[26]);
  v35 = v14;
  v15 = v44;
  if ( v10 <= v44 )
  {
    while ( 1 )
    {
      LOBYTE(v13) = v14;
      NextPageTable = MiGetNextPageTable(v10, v15, (unsigned int)v49, v13, 0, (__int64)&v45);
      v17 = 1;
      if ( NextPageTable != v10 )
      {
        if ( (*(_DWORD *)(v5 + 48) & 0x200000) != 0
          || !*(_QWORD *)(v5 + 80)
          || !MiGetProtoPteAddress(v5, (unsigned __int64)((__int64)(v10 << 25) >> 16) >> 12, 0LL, v41) )
        {
          v8 = -1073740748;
          ProtoLeafValid = -1073740748;
          if ( !NextPageTable )
          {
            v12 = (__int64)v43;
            goto LABEL_28;
          }
          v10 = NextPageTable;
LABEL_4:
          v11 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          goto LABEL_5;
        }
        v17 = 0;
      }
      if ( NextPageTable )
        goto LABEL_4;
LABEL_5:
      while ( 1 )
      {
        ProtoPteAddress = 0LL;
        v40 = 0;
        v37 = 0;
        if ( !v17 )
          break;
        v19 = MI_READ_PTE_LOCK_FREE(v10);
        v20 = v19;
        if ( !v19 )
          break;
        if ( (v19 & 1) != 0 || (v19 & 0x400) == 0 )
        {
          v21 = v42;
          goto LABEL_9;
        }
        if ( v39 == 2 && MI_PROTO_FORMAT_COMBINED(v19) )
        {
          v29 = v20;
          if ( qword_140C657C0 && (v20 & 0x10) == 0 )
            v29 = v20 & ~qword_140C657C0;
          ProtoPteAddress = v29 >> 16;
          goto LABEL_52;
        }
        if ( MI_PROTO_FORMAT_COMBINED(v20) )
        {
          if ( v30 == 1 )
            goto LABEL_64;
          if ( v9 )
          {
            MiUnlockProtoPoolPage(v9, v34);
            v9 = 0LL;
            v38 = 0LL;
          }
          MiFlushTbList(v49);
          ProtoLeafValid = MiMakeProtoLeafValid(v10);
          if ( ProtoLeafValid < 0 )
LABEL_64:
            ProtoLeafValid = -1073740748;
          else
            v10 -= 8LL;
          v8 = ProtoLeafValid;
          goto LABEL_83;
        }
        v31 = ((__int64)(v10 << 25) >> 16) & 0xFFFFFFFFFFFFF000uLL;
        if ( (v31 == 2147352576 || v31 == qword_140C656B8 && qword_140C656B8)
          && (HIDWORD(Process[2].Header.WaitListHead.Flink) & 1) == 0 )
        {
          goto LABEL_82;
        }
        if ( (*(_DWORD *)(v42 + 48) & 0x200000) == 0 && *(_QWORD *)(v42 + 80) )
        {
          ProtoPteAddress = MiGetProtoPteAddress(v42, (unsigned __int64)((__int64)(v10 << 25) >> 16) >> 12, 0LL, v41);
          if ( (unsigned int)MiIsPrototypePteVadLookup(v20) )
            goto LABEL_52;
          v32 = v20;
          if ( qword_140C657C0 && (v20 & 0x10) == 0 )
            v32 = v20 & ~qword_140C657C0;
          if ( ProtoPteAddress == v32 >> 16 )
            goto LABEL_52;
          v30 = v39;
        }
        v33 = v20;
        if ( qword_140C657C0 && (v20 & 0x10) == 0 )
          v33 = v20 & ~qword_140C657C0;
        ProtoPteAddress = v33 >> 16;
        if ( v30 != 2 )
        {
LABEL_82:
          v8 = -1073740748;
          ProtoLeafValid = -1073740748;
LABEL_83:
          v27 = v37;
          v10 += 8LL;
          goto LABEL_17;
        }
LABEL_52:
        v21 = v42;
        if ( ProtoPteAddress )
          goto LABEL_53;
LABEL_9:
        if ( v9 )
        {
          MiUnlockProtoPoolPage(v9, v34);
          v9 = 0LL;
          v22 = 0LL;
          v38 = 0LL;
        }
        else
        {
          v22 = v38;
        }
LABEL_11:
        v23 = MiActOnPte(v21, v17, v10, ProtoPteAddress, v39, a5, &v47, &v46);
        if ( v23 )
        {
          if ( v23 == 274 )
          {
            v24 = 1;
            MiInsertTbFlushEntry(v49, (__int64)(v10 << 25) >> 16, 1LL);
            MiFlushTbList(v49);
            v37 = MiCopyOnWrite((__int64)(v10 << 25) >> 16);
            v10 -= 8LL;
            goto LABEL_13;
          }
          if ( v23 != -1073741791 )
          {
            v24 = v40;
            v25 = v23;
            ProtoLeafValid = v23;
            goto LABEL_14;
          }
          MiInsertTbFlushEntry(v49, (__int64)(v10 << 25) >> 16, 1LL);
        }
        v24 = v40;
LABEL_13:
        v25 = ProtoLeafValid;
LABEL_14:
        v26 = v46;
        if ( v46 )
        {
          if ( v9 )
          {
            MiUnlockProtoPoolPage(v9, v34);
            v26 = v46;
            v9 = 0LL;
            v22 = 0LL;
            v38 = 0LL;
          }
          MiReleasePageFileInfo(v47, v26, 1);
        }
        v10 += 8LL;
        if ( v24 )
        {
          v27 = v37;
          goto LABEL_96;
        }
        v38 = v22;
        v27 = v37;
        ProtoLeafValid = v25;
        v8 = v25;
        if ( v37 < 0 )
          goto LABEL_21;
LABEL_17:
        if ( v10 > v44
          || (v10 & 0xFFF) == 0
          || (v10 & 0x78) == 0 && (unsigned int)MiWorkingSetIsContended(v43)
          || KeShouldYieldProcessor() )
        {
          goto LABEL_21;
        }
      }
      v21 = v42;
      if ( (*(_DWORD *)(v42 + 48) & 0x200000) != 0 || !*(_QWORD *)(v42 + 80) )
        goto LABEL_9;
      ProtoPteAddress = MiGetProtoPteAddress(v42, (unsigned __int64)((__int64)(v10 << 25) >> 16) >> 12, 0LL, v41);
      if ( !ProtoPteAddress )
      {
        if ( !v17 )
        {
          v27 = v37;
LABEL_96:
          v8 = ProtoLeafValid;
LABEL_21:
          if ( v9 )
          {
            MiUnlockProtoPoolPage(v9, v34);
            v9 = 0LL;
            v38 = 0LL;
          }
          MiFlushTbList(v49);
          v12 = (__int64)v43;
          if ( v11 )
          {
            MiUnlockPageTableInternal((__int64)v43, v11);
            v11 = 0LL;
          }
          v14 = v35;
          MiUnlockWorkingSetShared(v12, v35);
          if ( v27 == -1073740748 )
            MiCopyOnWriteCheckConditions(v12, 3221226548LL);
          goto LABEL_27;
        }
        goto LABEL_9;
      }
LABEL_53:
      v22 = v38;
      if ( ((ProtoPteAddress ^ v38) & 0xFFFFFFFFFFFFF000uLL) == 0 )
        goto LABEL_11;
      if ( v9 )
      {
        MiUnlockProtoPoolPage(v9, v34);
        v38 = 0LL;
      }
      v9 = MiLockProtoPoolPage(ProtoPteAddress, &v34);
      if ( v9 )
      {
        v22 = ProtoPteAddress;
        v38 = ProtoPteAddress;
        goto LABEL_11;
      }
      MiFlushTbList(v49);
      v12 = (__int64)v43;
      if ( v11 )
      {
        MiUnlockPageTableInternal((__int64)v43, v11);
        v11 = 0LL;
      }
      v14 = v35;
      MiUnlockWorkingSetShared(v12, v35);
      MmAccessFault(2uLL, ProtoPteAddress, 0, 0LL);
      v8 = ProtoLeafValid;
LABEL_27:
      MiLockWorkingSetShared(v12);
      v15 = v44;
      v5 = v42;
      if ( v10 > v44 )
      {
LABEL_28:
        v14 = v35;
        break;
      }
    }
  }
  MiFlushTbList(v49);
  MiUnlockWorkingSetShared(v12, v14);
  return v8;
}
