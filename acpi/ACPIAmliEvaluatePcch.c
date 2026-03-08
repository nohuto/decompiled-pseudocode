/*
 * XREFs of ACPIAmliEvaluatePcch @ 0x1C007C968
 * Callers:
 *     ACPIPccLegacyInitialize @ 0x1C00897A8 (ACPIPccLegacyInitialize.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C0047B9C (AMLIEvalNameSpaceObject.c)
 *     AMLIFreeDataBuffs @ 0x1C00482C4 (AMLIFreeDataBuffs.c)
 *     AMLIGetNamedChild @ 0x1C0048698 (AMLIGetNamedChild.c)
 *     AcpiParseGenRegDesc @ 0x1C007CAC4 (AcpiParseGenRegDesc.c)
 */

__int64 __fastcall ACPIAmliEvaluatePcch(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  __int64 *v8; // rdi
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r11
  __int64 v12; // rcx
  bool v13; // zf
  int v14; // eax
  __int128 v15; // xmm1
  __int64 v16; // xmm0_8
  __int64 v17; // r11
  _OWORD v19[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v20; // [rsp+40h] [rbp-18h]

  v8 = AMLIGetNamedChild(a1, 1212367696);
  if ( v8 )
  {
    v20 = 0LL;
    memset(v19, 0, sizeof(v19));
    v9 = AMLIEvalNameSpaceObject(v8, (__int64)v19, 0, 0LL);
    if ( v9 < 0 )
    {
LABEL_17:
      AMLIDereferenceHandleEx((volatile signed __int32 *)v8, v10);
      return (unsigned int)v9;
    }
    if ( WORD1(v19[0]) == 4 )
    {
      v11 = v20;
      if ( *(_DWORD *)v20 == 4 && *(_WORD *)(v20 + 10) == 3 && *(_DWORD *)(v20 + 32) >= 0x2Eu )
      {
        v12 = *(_QWORD *)(v20 + 40);
        if ( *(_BYTE *)v12 == 0x8A )
        {
          v13 = *(_WORD *)(v20 + 50) == 3;
          v14 = *(_DWORD *)(v12 + 40);
          v15 = *(_OWORD *)(v12 + 16);
          *(_OWORD *)a2 = *(_OWORD *)v12;
          v16 = *(_QWORD *)(v12 + 32);
          *(_OWORD *)(a2 + 16) = v15;
          *(_QWORD *)(a2 + 32) = v16;
          *(_DWORD *)(a2 + 40) = v14;
          *(_WORD *)(a2 + 44) = *(_WORD *)(v12 + 44);
          if ( v13 && *(_DWORD *)(v11 + 72) >= 0xCu )
          {
            v9 = AcpiParseGenRegDesc(*(_QWORD *)(v11 + 80), a3);
            if ( v9 < 0 )
            {
LABEL_16:
              AMLIFreeDataBuffs((__int64)v19);
              goto LABEL_17;
            }
            if ( *(_WORD *)(v17 + 90) == 1 )
            {
              *a4 = *(_QWORD *)(v17 + 104);
              if ( *(_WORD *)(v17 + 130) == 1 )
              {
                *a5 = *(_QWORD *)(v17 + 144);
                goto LABEL_16;
              }
            }
          }
        }
      }
    }
    v9 = -1072431096;
    goto LABEL_16;
  }
  return (unsigned int)-1073741823;
}
