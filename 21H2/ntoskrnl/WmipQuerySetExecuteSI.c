/*
 * XREFs of WmipQuerySetExecuteSI @ 0x140757430
 * Callers:
 *     WmipIoControl @ 0x1406061A0 (WmipIoControl.c)
 *     IoWMIQuerySingleInstance @ 0x140757300 (IoWMIQuerySingleInstance.c)
 *     IoWMIExecuteMethod @ 0x140930FE0 (IoWMIExecuteMethod.c)
 *     IoWMISetSingleInstance @ 0x140931350 (IoWMISetSingleInstance.c)
 *     IoWMISetSingleItem @ 0x140931480 (IoWMISetSingleItem.c)
 *     WmipQuerySingleMultiple @ 0x140933020 (WmipQuerySingleMultiple.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByPointer @ 0x1402A5010 (ObReferenceObjectByPointer.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     WmipUnreferenceEntry @ 0x14062E428 (WmipUnreferenceEntry.c)
 *     WmipForwardWmiIrp @ 0x14062E4FC (WmipForwardWmiIrp.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     WmipSendWmiIrp @ 0x1407576DC (WmipSendWmiIrp.c)
 *     WmipPrepareWnodeSI @ 0x1407577C4 (WmipPrepareWnodeSI.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipQuerySetExecuteSI(
        PADAPTER_OBJECT DmaAdapter,
        PIRP Irp,
        KPROCESSOR_MODE AccessMode,
        unsigned __int8 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // rsi
  __int64 v11; // r15
  ACCESS_MASK v12; // edx
  int v13; // r12d
  NTSTATUS v14; // eax
  int v15; // ebx
  __int64 v16; // rcx
  volatile signed __int64 **v17; // rsi
  volatile signed __int64 *v18; // rcx
  __int64 v19; // rdx
  int v20; // ecx
  ULONG_PTR *p_Information; // rax
  __int64 v22; // r15
  volatile signed __int64 **v23; // r14
  void *v25; // rcx
  __int64 v26; // rdx
  int v27; // eax
  ULONG_PTR *v28; // r14
  char v29; // [rsp+30h] [rbp-B1h] BYREF
  char v30[7]; // [rsp+31h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+38h] [rbp-A9h] BYREF
  unsigned int *v32; // [rsp+40h] [rbp-A1h]
  PVOID P; // [rsp+48h] [rbp-99h] BYREF
  __int128 v34; // [rsp+50h] [rbp-91h] BYREF
  _BYTE v35[128]; // [rsp+60h] [rbp-81h] BYREF

  v7 = a7;
  v32 = a7;
  v11 = a4;
  memset(v35, 0, sizeof(v35));
  v12 = *((_DWORD *)DesiredAccessForFunction + v11);
  v13 = 0;
  v30[0] = 0;
  v29 = 0;
  v34 = 0LL;
  if ( DmaAdapter )
  {
    v14 = ObReferenceObjectByPointer(DmaAdapter, v12, WmipGuidObjectType, AccessMode);
  }
  else
  {
    v25 = *(void **)(a5 + 16);
    Object = 0LL;
    v14 = ObReferenceObjectByHandle(v25, v12, WmipGuidObjectType, AccessMode, &Object, 0LL);
    DmaAdapter = (PADAPTER_OBJECT)Object;
  }
  v15 = v14;
  if ( v14 < 0 )
    return (unsigned int)v15;
  LODWORD(Object) = 16;
  P = v35;
  v15 = WmipPrepareWnodeSI((_DWORD)DmaAdapter, a5, (unsigned int)&Object, (unsigned int)&P, (__int64)v30, (__int64)&v29);
  if ( v15 >= 0 )
  {
    if ( v29 )
    {
      *(_DWORD *)(a5 + 44) |= 0x100u;
      *(_DWORD *)a5 = 48;
      Irp->IoStatus.Information = 48LL;
    }
    else if ( v30[0] )
    {
      if ( (_BYTE)v11 == 3 || (v15 = -1073741162, (_BYTE)v11 == 9) )
        v15 = -1073741161;
      v17 = (volatile signed __int64 **)P;
      if ( (_DWORD)Object )
      {
        while ( 1 )
        {
          v18 = v17[v13];
          v19 = *((unsigned int *)v18 + 20);
          *(_DWORD *)(a5 + 4) = v19;
          if ( Irp )
          {
            v20 = WmipForwardWmiIrp(Irp, v11, v19, (UNICODE_STRING *)(a5 + 24), a6, a5);
            p_Information = &Irp->IoStatus.Information;
          }
          else
          {
            LOBYTE(v18) = v11;
            v20 = WmipSendWmiIrp(v18, v19, a5 + 24, a6, a5, &v34);
            p_Information = (ULONG_PTR *)&v34 + 1;
          }
          if ( v20 >= 0 )
            *v32 = *(_DWORD *)p_Information;
          if ( (unsigned int)(v20 + 1073741163) > 1 )
            break;
          if ( ++v13 >= (unsigned int)Object )
            goto LABEL_18;
        }
        v15 = v20;
LABEL_18:
        v22 = (unsigned int)Object;
        v23 = v17;
        do
        {
          WmipUnreferenceEntry((__int64)&WmipISChunkInfo, *v23++);
          --v22;
        }
        while ( v22 );
      }
      if ( v17 != (volatile signed __int64 **)v35 && v17 )
        ExFreePoolWithTag(v17, 0);
      v7 = v32;
    }
    else
    {
      v26 = *(unsigned int *)(a5 + 4);
      if ( Irp )
      {
        v27 = WmipForwardWmiIrp(Irp, v11, v26, (UNICODE_STRING *)(a5 + 24), a6, a5);
        v28 = &Irp->IoStatus.Information;
      }
      else
      {
        LOBYTE(v16) = v11;
        v27 = WmipSendWmiIrp(v16, v26, a5 + 24, a6, a5, &v34);
        v28 = (ULONG_PTR *)&v34 + 1;
      }
      v15 = v27;
      if ( v27 < 0 )
      {
LABEL_25:
        *(_DWORD *)(a5 + 4) = 0;
        goto LABEL_26;
      }
      *a7 = *(_DWORD *)v28;
    }
    if ( v15 >= 0 && *v7 > a6 )
      v15 = -1073741811;
    goto LABEL_25;
  }
LABEL_26:
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  return (unsigned int)v15;
}
