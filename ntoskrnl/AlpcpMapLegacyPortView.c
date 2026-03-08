/*
 * XREFs of AlpcpMapLegacyPortView @ 0x1407829D0
 * Callers:
 *     AlpcpFormatConnectionRequest @ 0x140712838 (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x140713844 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     AlpcpCreateSectionView @ 0x1406A050C (AlpcpCreateSectionView.c)
 *     AlpcpCreateSection @ 0x140712378 (AlpcpCreateSection.c)
 *     AlpcpDereferenceBlobEx @ 0x14071550C (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteBlob @ 0x140715630 (AlpcpDeleteBlob.c)
 *     MmGetSectionInformation @ 0x140720B20 (MmGetSectionInformation.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1407CBD44 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1407CDB50 (AlpcpUnlockBlob.c)
 */

__int64 __fastcall AlpcpMapLegacyPortView(char *Object, __int64 a2, __int64 a3)
{
  void *v3; // rsi
  int SectionInformation; // edi
  PVOID v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // r15
  __int64 v11; // r12
  ULONG_PTR v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v17; // [rsp+30h] [rbp-20h] BYREF
  __int128 v18; // [rsp+38h] [rbp-18h] BYREF
  PVOID v19; // [rsp+48h] [rbp-8h]
  PVOID Objecta; // [rsp+98h] [rbp+48h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+50h]
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp+58h] BYREF

  v21 = a3;
  v3 = *(void **)(a2 + 8);
  BugCheckParameter2 = 0LL;
  v19 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( !v3 )
    return 3221225480LL;
  Objecta = 0LL;
  SectionInformation = ObReferenceObjectByHandle(
                         v3,
                         6u,
                         MmSectionObjectType,
                         KeGetCurrentThread()->PreviousMode,
                         &Objecta,
                         0LL);
  if ( SectionInformation >= 0 )
  {
    SectionInformation = MmGetSectionInformation((__int64)Objecta, 0, (__int64)&v18);
    if ( SectionInformation >= 0 )
    {
      if ( (DWORD2(v18) & 0x800000) != 0 )
      {
        SectionInformation = -1073741637;
      }
      else
      {
        v7 = v19;
        v8 = (unsigned int)(AlpcpViewGranularity - 1);
        v9 = ~((unsigned int)AlpcpViewGranularity - 1LL);
        v10 = v9 & (v8 + *(unsigned int *)(a2 + 16));
        v11 = v9 & (v8 + *(_QWORD *)(a2 + 24));
        if ( v11 + v10 < v10 )
        {
          SectionInformation = -1073741811;
        }
        else if ( v11 + v10 > (unsigned __int64)v19 )
        {
          SectionInformation = -1073741670;
        }
        else
        {
          SectionInformation = AlpcpCreateSection(Object, 0, 0, v3, v19, &BugCheckParameter2);
          if ( SectionInformation >= 0 )
          {
            v12 = BugCheckParameter2;
            v13 = (__int64)v7 - v10;
            if ( v11 )
              v13 = v11;
            SectionInformation = AlpcpCreateSectionView(BugCheckParameter2, (signed __int64 *)Object, v10, v13, &v17);
            if ( SectionInformation < 0 )
            {
              if ( AlpcpDeleteBlob(v12) )
                AlpcpDereferenceBlobEx(v12, 1);
            }
            else
            {
              v14 = v17;
              *(_DWORD *)a2 = 48;
              *(_QWORD *)(a2 + 32) = *(_QWORD *)(v14 + 40);
              v15 = *(_QWORD *)(v14 + 48);
              *(_QWORD *)(a2 + 40) = 0LL;
              *(_QWORD *)(a2 + 24) = v15;
              *(_QWORD *)(v21 + 40) = v14;
              AlpcpLockForCachedReferenceBlob(*(_QWORD *)(v14 + 16));
              ++*(_DWORD *)(v14 + 76);
              AlpcpUnlockBlob(*(_QWORD *)(v14 + 16));
            }
            AlpcpDereferenceBlobEx(v12, 1);
          }
        }
      }
    }
    ObfDereferenceObject(Objecta);
  }
  return (unsigned int)SectionInformation;
}
