__int64 __fastcall WmipQuerySetExecuteSI(
        PVOID Object,
        IRP *a2,
        KPROCESSOR_MODE a3,
        unsigned __int8 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // r15
  PVOID v10; // rsi
  __int64 v11; // r12
  ACCESS_MASK v12; // edx
  int v13; // r13d
  NTSTATUS v14; // eax
  int v15; // ebx
  __int64 v16; // rcx
  __int64 v17; // r15
  _QWORD *v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // ecx
  ULONG_PTR *p_Information; // rax
  _QWORD *v23; // r14
  int v25; // eax
  ULONG_PTR *v26; // r14
  void *v27; // rcx
  char v28; // [rsp+30h] [rbp-C1h] BYREF
  char v29[7]; // [rsp+31h] [rbp-C0h] BYREF
  PVOID v30; // [rsp+38h] [rbp-B9h] BYREF
  PVOID P; // [rsp+40h] [rbp-B1h] BYREF
  unsigned int *v32; // [rsp+48h] [rbp-A9h]
  PVOID v33; // [rsp+50h] [rbp-A1h]
  __int128 v34; // [rsp+58h] [rbp-99h] BYREF
  _BYTE v35[128]; // [rsp+70h] [rbp-81h] BYREF

  v7 = a7;
  v10 = Object;
  v33 = Object;
  v32 = a7;
  v11 = a4;
  memset(v35, 0, sizeof(v35));
  v12 = *((_DWORD *)DesiredAccessForFunction + v11);
  v13 = 0;
  v29[0] = 0;
  v28 = 0;
  v34 = 0LL;
  if ( v10 )
  {
    v14 = ObReferenceObjectByPointer(v10, v12, WmipGuidObjectType, a3);
  }
  else
  {
    v27 = *(void **)(a5 + 16);
    v30 = 0LL;
    v14 = ObReferenceObjectByHandle(v27, v12, WmipGuidObjectType, a3, &v30, 0LL);
    v10 = v30;
    v33 = v30;
  }
  v15 = v14;
  if ( v14 < 0 )
    return (unsigned int)v15;
  LODWORD(v30) = 16;
  P = v35;
  v15 = WmipPrepareWnodeSI((__int64)v10, a5, (int *)&v30, &P, v29, &v28);
  if ( v15 >= 0 )
  {
    if ( v28 )
    {
      *(_DWORD *)(a5 + 44) |= 0x100u;
      *(_DWORD *)a5 = 48;
      a2->IoStatus.Information = 48LL;
    }
    else if ( v29[0] )
    {
      if ( (_BYTE)v11 == 3 || (v15 = -1073741162, (_BYTE)v11 == 9) )
        v15 = -1073741161;
      v17 = (unsigned int)v30;
      v18 = P;
      if ( (_DWORD)v30 )
      {
        while ( 1 )
        {
          v19 = v18[v13];
          v20 = *(unsigned int *)(v19 + 80);
          *(_DWORD *)(a5 + 4) = v20;
          if ( a2 )
          {
            v21 = WmipForwardWmiIrp(a2, a6, a5);
            p_Information = &a2->IoStatus.Information;
          }
          else
          {
            LOBYTE(v19) = v11;
            v21 = WmipSendWmiIrp(v19, v20, a5 + 24, a6, a5, &v34);
            p_Information = (ULONG_PTR *)&v34 + 1;
          }
          if ( v21 >= 0 )
            break;
          if ( (unsigned int)(v21 + 1073741163) > 1 )
            goto LABEL_14;
          if ( ++v13 >= (unsigned int)v17 )
            goto LABEL_15;
        }
        *v32 = *(_DWORD *)p_Information;
LABEL_14:
        v15 = v21;
      }
LABEL_15:
      if ( (_DWORD)v17 )
      {
        v23 = v18;
        do
        {
          WmipUnreferenceEntry(&WmipISChunkInfo, *v23++);
          --v17;
        }
        while ( v17 );
      }
      if ( v18 != (_QWORD *)v35 && v18 )
        ExFreePoolWithTag(v18, 0);
      if ( v15 < 0 )
        goto LABEL_23;
      v7 = v32;
    }
    else
    {
      if ( a2 )
      {
        v25 = WmipForwardWmiIrp(a2, a6, a5);
        v26 = &a2->IoStatus.Information;
      }
      else
      {
        LOBYTE(v16) = v11;
        v25 = WmipSendWmiIrp(v16, *(unsigned int *)(a5 + 4), a5 + 24, a6, a5, &v34);
        v26 = (ULONG_PTR *)&v34 + 1;
      }
      v15 = v25;
      if ( v25 < 0 )
      {
LABEL_23:
        v10 = v33;
        *(_DWORD *)(a5 + 4) = 0;
        goto LABEL_24;
      }
      *a7 = *(_DWORD *)v26;
    }
    if ( *v7 > a6 )
      v15 = -1073741811;
    goto LABEL_23;
  }
LABEL_24:
  if ( v10 )
    ObfDereferenceObject(v10);
  return (unsigned int)v15;
}
