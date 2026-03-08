/*
 * XREFs of IopGraftName @ 0x14087A8D0
 * Callers:
 *     IopSymlinkProcessReparse @ 0x140790C0C (IopSymlinkProcessReparse.c)
 * Callees:
 *     IopSymlinkGetECP @ 0x14023ADA0 (IopSymlinkGetECP.c)
 *     IopSymlinkRemoveECP @ 0x14023ADC4 (IopSymlinkRemoveECP.c)
 *     IopGetFileObjectExtension @ 0x14023EB8C (IopGetFileObjectExtension.c)
 *     Feature_2723316028__private_IsEnabledDeviceUsage @ 0x14040A1F0 (Feature_2723316028__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     IopCopyOverNewPathSecure @ 0x14067C86C (IopCopyOverNewPathSecure.c)
 *     IoGetIrpExtraCreateParameter @ 0x1406B1D50 (IoGetIrpExtraCreateParameter.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14070C300 (FsRtlFreeExtraCreateParameter.c)
 *     ObQueryNameStringMode @ 0x14071EE84 (ObQueryNameStringMode.c)
 *     IopGetFileInformation @ 0x14072054C (IopGetFileInformation.c)
 *     IopSymlinkAllocateAndAddECP @ 0x14077E41C (IopSymlinkAllocateAndAddECP.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x14077E4E8 (IopSymlinkInitializeSymlinkInfo.c)
 *     IopSymlinkRememberJunction @ 0x14087A7D0 (IopSymlinkRememberJunction.c)
 *     IopSymlinkGetRelatedMountPoint @ 0x14087AF0C (IopSymlinkGetRelatedMountPoint.c)
 *     IopCopyOverNewPath @ 0x14087AF34 (IopCopyOverNewPath.c)
 *     IopSymlinkUpdateECP @ 0x14087BDFC (IopSymlinkUpdateECP.c)
 *     IopSymlinkApplyToOpenedName @ 0x140945D10 (IopSymlinkApplyToOpenedName.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

IRP *__fastcall IopGraftName(IRP *a1, __int64 a2, int *a3)
{
  void *v3; // r12
  unsigned int v5; // esi
  NTSTATUS IrpExtraCreateParameter; // edi
  UNICODE_STRING *v8; // r13
  int v9; // ebx
  __int64 v10; // r8
  unsigned __int64 v11; // rcx
  int v12; // eax
  unsigned __int16 v13; // r11
  __int64 v14; // rdx
  char *v15; // rax
  unsigned int v16; // r15d
  __int64 v17; // rax
  unsigned __int16 *v18; // r12
  int v19; // eax
  ULONG v20; // ebx
  struct _FILE_OBJECT *v21; // rdi
  struct _IRP *v22; // rax
  struct _IRP *v23; // r15
  int FileInformation; // eax
  unsigned int v25; // ecx
  __int64 RelatedMountPoint; // rax
  wchar_t *v27; // r9
  unsigned __int16 v28; // r11
  wchar_t *Buffer; // rcx
  PVOID v30; // r15
  unsigned int v31; // r10d
  unsigned int v32; // r12d
  __int64 Pool2; // rax
  int v34; // ecx
  char *v35; // rdi
  unsigned int v36; // r12d
  unsigned __int16 *v37; // rbx
  struct _IRP *v38; // rsi
  char *v39; // rbx
  char *v40; // rsi
  unsigned __int16 v41; // si
  PVOID v42; // r15
  unsigned int v43; // r13d
  __int16 v44; // dx
  __int64 v45; // rax
  wchar_t *v46; // rcx
  int IsEnabledDeviceUsage; // eax
  __int64 v48; // rbx
  int updated; // eax
  IRP *result; // rax
  __int16 v51; // [rsp+20h] [rbp-69h]
  __int64 v52; // [rsp+50h] [rbp-39h] BYREF
  PVOID EcpContext; // [rsp+58h] [rbp-31h] BYREF
  char *v54; // [rsp+60h] [rbp-29h]
  const void **v55; // [rsp+68h] [rbp-21h]
  PVOID Object; // [rsp+70h] [rbp-19h]
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+78h] [rbp-11h] BYREF
  struct _IRP *v58; // [rsp+80h] [rbp-9h]
  unsigned __int16 *v59; // [rsp+88h] [rbp-1h]
  PVOID P; // [rsp+90h] [rbp+7h]
  PVOID v63; // [rsp+100h] [rbp+77h] BYREF
  unsigned __int16 v64; // [rsp+108h] [rbp+7Fh]

  v3 = *(void **)(a2 + 64);
  LODWORD(v52) = 0;
  v64 = 0;
  v5 = 0;
  v54 = 0LL;
  Object = v3;
  EcpContext = 0LL;
  LOBYTE(v63) = 0;
  P = 0LL;
  v55 = 0LL;
  v58 = 0LL;
  ExtraCreateParameter = 0LL;
  IrpExtraCreateParameter = IoGetIrpExtraCreateParameter(a1, &ExtraCreateParameter);
  IopSymlinkGetECP(ExtraCreateParameter, &EcpContext);
  v8 = (UNICODE_STRING *)EcpContext;
  v9 = -1073741192;
  v10 = 4194817LL;
  *((_WORD *)EcpContext + 1) |= 2u;
  if ( a1->IoStatus.Status != 260 )
    IrpExtraCreateParameter = -1073741192;
  v11 = a1->IoStatus.Information - 2684354563u;
  if ( v11 > 0x16 || !_bittest64(&v10, v11) )
    IrpExtraCreateParameter = -1073741192;
  if ( !a1->Tail.Overlay.AuxiliaryBuffer )
    IrpExtraCreateParameter = -1073741192;
  if ( !a3 )
    IrpExtraCreateParameter = -1073741192;
  if ( *((_WORD *)a3 + 3) >= 0x4000u )
    IrpExtraCreateParameter = -1073741192;
  v12 = *a3;
  if ( *((_WORD *)a3 + 2) >= 0x4000u )
    IrpExtraCreateParameter = -1073741192;
  if ( (unsigned int)(v12 + 1610612733) > 0x16 || !_bittest((const int *)&v10, v12 + 1610612733) )
    IrpExtraCreateParameter = -1073741192;
  v59 = (unsigned __int16 *)(a2 + 88);
  if ( *(_WORD *)(a2 + 88) )
  {
    v9 = IrpExtraCreateParameter;
    if ( IrpExtraCreateParameter >= 0 )
    {
      if ( v12 == -1610612733 )
      {
        v13 = *((_WORD *)a3 + 5);
        v54 = (char *)a3 + *((unsigned __int16 *)a3 + 4) + 16;
        v64 = v13;
LABEL_21:
        v14 = *((unsigned __int16 *)a3 + 3);
LABEL_46:
        RelatedMountPoint = IopSymlinkGetRelatedMountPoint(v8, v14);
        if ( !RelatedMountPoint )
        {
          RelatedMountPoint = (__int64)v8;
          if ( v8->Buffer != v27 )
          {
            Buffer = v8->Buffer;
            do
            {
              RelatedMountPoint = (__int64)Buffer;
              Buffer = (wchar_t *)*((_QWORD *)Buffer + 1);
            }
            while ( Buffer );
          }
        }
        v30 = Object;
        v31 = *(unsigned __int16 *)(RelatedMountPoint + 16);
        if ( (_BYTE)v63 != (_BYTE)v27 )
        {
          if ( !Object || IopGetFileObjectExtension((__int64)Object, 5, 0LL) )
          {
            if ( v5 <= v31 )
              v5 = v31;
          }
          else
          {
            v5 += v31;
          }
          v5 += 2;
        }
        v32 = v5 + v28 + *((unsigned __int16 *)a3 + 3) + 4;
        if ( v32 >= 0xFFFF )
        {
          v9 = -1073741562;
        }
        else
        {
          Pool2 = ExAllocatePool2(256LL, v32, 1665560393LL);
          v34 = v9;
          v35 = (char *)Pool2;
          if ( !Pool2 )
            v34 = -1073741670;
          v36 = v32 - 2;
          v9 = v34;
          if ( v34 >= 0 )
          {
            if ( !(_BYTE)v63 )
            {
              IsEnabledDeviceUsage = Feature_2723316028__private_IsEnabledDeviceUsage();
              v51 = *((_WORD *)a3 + 3);
              if ( IsEnabledDeviceUsage )
              {
                v9 = IopCopyOverNewPathSecure(v35, v54, v64, a2, v51);
                if ( v9 < 0 )
                {
                  ExFreePoolWithTag(v35, 0);
                  goto LABEL_94;
                }
                v48 = a2;
              }
              else
              {
                v48 = a2;
                IopCopyOverNewPath(v35, v51);
              }
              if ( *a3 == -1610612733 )
                updated = IopSymlinkRememberJunction(*((_WORD *)a3 + 3), v48, (__int64)a1, v8);
              else
                updated = IopSymlinkUpdateECP(a1, v8, 0, v8->MaximumLength & 0xFFFE);
              v9 = updated;
              goto LABEL_92;
            }
            v63 = 0LL;
            if ( v30 && !IopGetFileObjectExtension((__int64)v30, 5, 0LL) )
            {
              v37 = (unsigned __int16 *)v55;
              memmove(v35, v55[1], *(unsigned __int16 *)v55);
              v38 = v58;
              v39 = &v35[2 * ((unsigned __int64)*v37 >> 1)];
              memmove(v39, &v58->Size + 1, *(unsigned int *)&v58->Type);
              v40 = &v39[2 * ((unsigned __int64)*(unsigned int *)&v38->Type >> 1)];
              if ( **(_WORD **)(a2 + 96) != 92 && *((_WORD *)v40 - 1) != 92 )
              {
                *(_WORD *)v40 = 92;
                LOWORD(v40) = (_WORD)v40 + 2;
              }
              v41 = (_WORD)v40 - (_WORD)v35;
              IopSymlinkRemoveECP(ExtraCreateParameter, &EcpContext);
              v42 = EcpContext;
              v43 = *((unsigned __int16 *)EcpContext + 8) + 2 + v41;
              if ( v43 >= 0xFFFF )
              {
                v9 = -1073741562;
LABEL_69:
                ExFreePoolWithTag(v35, 0);
                goto LABEL_88;
              }
              v9 = IopSymlinkAllocateAndAddECP(a1, &v63, v43);
              if ( v9 < 0 )
                goto LABEL_69;
              v44 = v43 + 32;
              v8 = (UNICODE_STRING *)v63;
              IopSymlinkInitializeSymlinkInfo(
                (__int64)v63,
                v44,
                *((const void **)v42 + 3),
                *((_WORD *)v42 + 8),
                *(_WORD *)v42,
                v35,
                v41,
                *(_WORD *)v55,
                *((_WORD *)v42 + 1),
                *((_QWORD *)v42 + 1));
              FsRtlFreeExtraCreateParameter(v42);
            }
            v45 = IopSymlinkGetRelatedMountPoint(v8, *((unsigned __int16 *)a3 + 3));
            if ( !v45 )
            {
              v45 = (__int64)v8;
              if ( v8->Buffer )
              {
                v46 = v8->Buffer;
                do
                {
                  v45 = (__int64)v46;
                  v46 = (wchar_t *)*((_QWORD *)v46 + 1);
                }
                while ( v46 );
              }
            }
            v9 = IopSymlinkApplyToOpenedName(a2, v45, a3, a1, v35, v36);
            goto LABEL_88;
          }
        }
LABEL_87:
        if ( !(_BYTE)v63 )
        {
LABEL_92:
          if ( v9 >= 0 )
            v9 = 260;
          goto LABEL_94;
        }
LABEL_88:
        v18 = (unsigned __int16 *)v55;
        if ( v55 )
LABEL_89:
          ExFreePoolWithTag(v18, 0);
        if ( P )
          ExFreePoolWithTag(P, 0);
        goto LABEL_92;
      }
      if ( v12 != -1610612724 )
      {
        v9 = -1073741194;
        goto LABEL_94;
      }
      v15 = (char *)a3 + *((unsigned __int16 *)a3 + 4) + 20;
      v64 = *((_WORD *)a3 + 5);
      v54 = v15;
      if ( (a3[4] & 1) != 0 )
      {
        LOBYTE(v63) = 1;
        v16 = 256;
        if ( v3 )
        {
          if ( !IopGetFileObjectExtension((__int64)v3, 5, 0LL) )
          {
            while ( 1 )
            {
              v17 = ExAllocatePool2(256LL, v16, 1665560393LL);
              v55 = (const void **)v17;
              v18 = (unsigned __int16 *)v17;
              if ( !v17 )
              {
                v9 = -1073741670;
                goto LABEL_94;
              }
              v19 = ObQueryNameStringMode(*(char **)(a2 + 8), v17, v16, &v52, 0);
              v9 = v19;
              if ( v19 >= 0 )
                break;
              if ( v19 != -2147483643 )
                goto LABEL_45;
              v16 = v52;
              if ( (unsigned int)v52 >= 0xFFFF )
              {
LABEL_37:
                v9 = -1073741562;
                goto LABEL_89;
              }
              ExFreePoolWithTag(v18, 0);
            }
            v20 = 256;
            v21 = (struct _FILE_OBJECT *)Object;
            v5 = *v18 + *v59 - *((unsigned __int16 *)a3 + 3);
            while ( 1 )
            {
              v22 = (struct _IRP *)ExAllocatePool2(256LL, v20, 1665560393LL);
              P = v22;
              v23 = v22;
              if ( !v22 )
              {
                v9 = -1073741670;
                goto LABEL_89;
              }
              v58 = v22;
              FileInformation = IopGetFileInformation(v21, v20, 9u, v22, &v52);
              v9 = FileInformation;
              if ( FileInformation >= 0 )
                break;
              if ( FileInformation != -2147483643 )
                goto LABEL_45;
              v20 = *(_DWORD *)&v23->Type + 8;
              if ( v20 >= 0xFFFF )
                goto LABEL_37;
              ExFreePoolWithTag(v23, 0);
            }
            v25 = v5 + *(_DWORD *)&v23->Type;
            if ( v25 < v5 )
            {
              v9 = -1073741675;
              goto LABEL_89;
            }
            v5 += *(_DWORD *)&v23->Type;
            if ( v25 < 0xFFFF )
              goto LABEL_21;
            v9 = -1073741562;
          }
        }
      }
    }
LABEL_45:
    v14 = *((unsigned __int16 *)a3 + 3);
    if ( v9 < 0 )
      goto LABEL_87;
    goto LABEL_46;
  }
LABEL_94:
  result = a1;
  a1->IoStatus.Status = v9;
  return result;
}
