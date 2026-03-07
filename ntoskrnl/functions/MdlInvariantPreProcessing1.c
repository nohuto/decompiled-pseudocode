unsigned __int64 __fastcall MdlInvariantPreProcessing1(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 v4; // r13
  __int64 v5; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  _QWORD *MdlInfo; // rdi
  __int64 v13; // r11
  char v14; // al
  ULONG_PTR v15; // r9
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rdx
  ULONG_PTR v22; // rdx
  unsigned __int64 v23; // rdx
  __int128 v24; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v25; // [rsp+40h] [rbp-28h]
  int v26; // [rsp+48h] [rbp-20h]
  char v27; // [rsp+4Ch] [rbp-1Ch]
  __int16 v28; // [rsp+4Dh] [rbp-1Bh]
  char v29; // [rsp+4Fh] [rbp-19h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v4 = *(_QWORD *)(a1 + 168);
  v5 = 0LL;
  v28 = 0;
  v29 = 0;
  v9 = *(_QWORD *)(v4 + 8);
  if ( !*(_QWORD *)v9 )
  {
    result = KeGetCurrentIrql();
    if ( (unsigned __int8)result >= 2u || *(_DWORD *)(v9 + 40) != -1 )
    {
      result = MmMdlPageContentsState(v9, 2u);
      if ( (_DWORD)result == 1 )
      {
        result = *(_QWORD *)(a1 + 168);
        v10 = *(_QWORD *)(result + 8);
        if ( (*(_BYTE *)(v10 + 10) & 5) != 0 )
        {
          v11 = *(_QWORD *)(v10 + 24);
        }
        else
        {
          result = (unsigned __int64)MmMapLockedPagesSpecifyCache((PMDL)v10, 0, MmCached, 0LL, 0, 0x40000020u);
          v11 = result;
        }
        if ( v11 )
        {
          MdlInfo = MdlInvariantFindMdlInfo(a2, *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL));
          if ( MdlInfo )
          {
            v14 = *(_BYTE *)(v13 + 67);
            if ( v14 == *(_BYTE *)(v13 + 66) || *((_BYTE *)MdlInfo + 28) == v14 )
            {
              *(_OWORD *)MdlInfo = 0LL;
              *((_OWORD *)MdlInfo + 1) = 0LL;
              MdlInfo = 0LL;
              *(_QWORD *)(*(_QWORD *)(a2 + 224) + 16LL) = 0LL;
            }
          }
          v15 = *(_QWORD *)(a1 + 168);
          v16 = *(_QWORD *)(v15 + 8);
          if ( !MdlInfo )
          {
            v17 = RtlpComputeCrcInternal(v11, *(unsigned int *)(v16 + 40), 0LL, (__int64)&Crc64Ctrl);
            v18 = *(_QWORD *)(a1 + 168);
            *((_QWORD *)&v24 + 1) = v17;
            v25 = v11;
            *(_QWORD *)&v24 = *(_QWORD *)(v18 + 8);
            v26 = *(_DWORD *)(v24 + 40);
            v27 = *(_BYTE *)(v18 + 67);
            return MdlInvariantInsertMdlInfo(a2, &v24);
          }
          v19 = *((unsigned int *)MdlInfo + 6);
          result = *(unsigned int *)(v16 + 40);
          if ( (_DWORD)v19 == (_DWORD)result )
          {
            v21 = result;
          }
          else
          {
            v20 = MdlInfo[2];
            if ( v11 < v20 || (v21 = (unsigned int)result, result += v11, result > v20 + v19) )
            {
              LOBYTE(v5) = *(_BYTE *)a3 != 4;
              v22 = v5 + 4112;
              return VerifierBugCheckIfAppropriate(0xC4u, v22, *(_QWORD *)(a3 + 40), v15, v11);
            }
          }
          if ( (MmVerifierData & 0x4000) != 0 )
          {
            result = RtlpComputeCrcInternal(v11, v21, 0LL, (__int64)&Crc64Ctrl);
            v23 = result;
            if ( MdlInfo[1] != result )
            {
              if ( *(_BYTE *)a3 == 4 )
              {
                v22 = 4112LL;
              }
              else
              {
                result = *(unsigned int *)(a3 + 8);
                if ( *(_DWORD *)(*(_QWORD *)(v4 + 184) + 8LL) != (_DWORD)result )
                {
                  MdlInfo[1] = v23;
                  return result;
                }
                v22 = 4113LL;
              }
              v15 = *(_QWORD *)(a1 + 168);
              return VerifierBugCheckIfAppropriate(0xC4u, v22, *(_QWORD *)(a3 + 40), v15, v11);
            }
          }
        }
      }
    }
  }
  return result;
}
