/*
 * XREFs of IvtInitializeScalableModePasidTables @ 0x14052AE74
 * Callers:
 *     IvtExtendScalableModePasidTables @ 0x14052A0B4 (IvtExtendScalableModePasidTables.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     IvtBuildScalableModePasidDirectoryEntry @ 0x1405298D4 (IvtBuildScalableModePasidDirectoryEntry.c)
 *     IvtSetScalableModePasidTableEntry @ 0x14052B4B0 (IvtSetScalableModePasidTableEntry.c)
 */

LONGLONG __fastcall IvtInitializeScalableModePasidTables(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rax
  __int128 *v9; // rax
  __int128 v10; // xmm2
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  unsigned int v13; // edi
  LONGLONG result; // rax
  LONGLONG v15[2]; // [rsp+30h] [rbp-78h] BYREF
  _OWORD v16[4]; // [rsp+40h] [rbp-68h] BYREF

  v15[0] = 0LL;
  v4 = a3;
  memset(v16, 0, sizeof(v16));
  memset(*(void **)(a2 + 8 * v4 + 56), 0, 0x1000uLL);
  v8 = *(_QWORD *)(a1 + 104);
  if ( v8 && !(_DWORD)v4 )
  {
    v9 = *(__int128 **)(v8 + 56);
    v10 = *v9;
    v11 = v9[2];
    v16[1] = v9[1];
    v12 = v9[3];
    *((_QWORD *)&v16[0] + 1) = *((_QWORD *)&v10 + 1);
    v16[2] = v11;
    *(_QWORD *)&v16[0] = v10 & 0xFFFFFFFFFFFFFFFDuLL;
    v16[3] = v12;
    IvtSetScalableModePasidTableEntry(v6, a2, 0LL, v16);
  }
  v13 = (_DWORD)v4 << 6;
  IvtBuildScalableModePasidDirectoryEntry(v6, a2, v13, v7, v15);
  result = v15[0];
  *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8LL * ((v13 >> 6) & 0x3FFF)) = v15[0];
  return result;
}
