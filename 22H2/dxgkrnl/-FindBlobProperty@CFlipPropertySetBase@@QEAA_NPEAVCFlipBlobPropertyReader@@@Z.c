/*
 * XREFs of ?FindBlobProperty@CFlipPropertySetBase@@QEAA_NPEAVCFlipBlobPropertyReader@@@Z @ 0x1C006E8A0
 * Callers:
 *     ?ApplyPresentAttributeMetadataToUpdateToken@CContentResourceState@@IEAAXPEAVCFlipPropertySet@@PEAVCFlipContentToken@@@Z @ 0x1C006E3F0 (-ApplyPresentAttributeMetadataToUpdateToken@CContentResourceState@@IEAAXPEAVCFlipPropertySet@@PE.c)
 * Callees:
 *     <none>
 */

bool __fastcall CFlipPropertySetBase::FindBlobProperty(CFlipPropertySetBase *this, struct CFlipBlobPropertyReader *a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // r9d
  __int64 v4; // r10
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  bool result; // al
  int v10; // ecx

  v2 = *((_DWORD *)this + 3);
  v3 = 0;
  v4 = *((_QWORD *)this + 3);
  if ( !v2 )
    return 0;
  v6 = *((_QWORD *)this + 2);
  while ( 1 )
  {
    v7 = 32LL * v3;
    v8 = *(_QWORD *)(v7 + v6) - 0x4BCC58064FF87EE1LL;
    if ( *(_QWORD *)(v7 + v6) == 0x4BCC58064FF87EE1LL )
      v8 = *(_QWORD *)(v7 + v6 + 8) + 0x479671FA25CA4F72LL;
    if ( !v8 )
      break;
    ++v3;
    v4 += *(unsigned int *)(v7 + v6 + 16);
    if ( v3 >= v2 )
      return 0;
  }
  v10 = *(_DWORD *)(32LL * v3 + v6 + 16);
  result = 1;
  *(_QWORD *)a2 = v4;
  *((_DWORD *)a2 + 2) = v10;
  return result;
}
