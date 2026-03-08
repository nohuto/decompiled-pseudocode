/*
 * XREFs of AslpFileMakeBinVersionAttributes @ 0x1407A042C
 * Callers:
 *     AslpFileGetVersionAttributes @ 0x1407A0DEC (AslpFileGetVersionAttributes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AslpFileMakeBinVersionAttributes(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r9
  _DWORD *v3; // r8
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // [rsp+10h] [rbp+10h]

  v2 = 4LL;
  v3 = (_DWORD *)(a1 + 440);
  if ( a2 )
  {
    *(_DWORD *)(a1 + 416) = 2;
    *(_QWORD *)(a1 + 424) = 4LL;
    v4 = (unsigned int)a2[11];
    *v3 |= 1u;
    *(_QWORD *)(a1 + 432) = v4;
    *(_DWORD *)(a1 + 448) = 2;
    *(_QWORD *)(a1 + 456) = 4LL;
    v5 = (unsigned int)a2[12];
    *(_DWORD *)(a1 + 472) |= 1u;
    *(_QWORD *)(a1 + 464) = v5;
    *(_DWORD *)(a1 + 480) = 2;
    *(_QWORD *)(a1 + 488) = 4LL;
    v6 = (unsigned int)a2[8];
    *(_DWORD *)(a1 + 504) |= 1u;
    *(_QWORD *)(a1 + 496) = v6;
    *(_DWORD *)(a1 + 512) = 2;
    *(_QWORD *)(a1 + 520) = 4LL;
    v7 = (unsigned int)a2[9];
    *(_DWORD *)(a1 + 536) |= 1u;
    *(_QWORD *)(a1 + 528) = v7;
    LODWORD(v9) = a2[5];
    LODWORD(v7) = a2[4];
    *(_DWORD *)(a1 + 152) |= 1u;
    HIDWORD(v9) = v7;
    *(_QWORD *)(a1 + 144) = v9;
    *(_DWORD *)(a1 + 128) = 3;
    *(_QWORD *)(a1 + 136) = 8LL;
    LODWORD(v9) = a2[3];
    LODWORD(v7) = a2[2];
    *(_DWORD *)(a1 + 120) |= 1u;
    HIDWORD(v9) = v7;
    result = v9;
    *(_QWORD *)(a1 + 112) = v9;
    *(_DWORD *)(a1 + 96) = 3;
    *(_QWORD *)(a1 + 104) = 8LL;
  }
  else
  {
    do
    {
      *v3 |= 2u;
      v3 += 8;
      --v2;
    }
    while ( v2 );
    *(_DWORD *)(a1 + 152) |= 2u;
    *(_DWORD *)(a1 + 120) |= 2u;
  }
  return result;
}
