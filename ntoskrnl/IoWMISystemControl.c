/*
 * XREFs of IoWMISystemControl @ 0x1407939D4
 * Callers:
 *     WmipSystemControl @ 0x1407939B0 (WmipSystemControl.c)
 * Callees:
 *     WmipFindRegEntryByProviderId @ 0x140208D1C (WmipFindRegEntryByProviderId.c)
 *     WmipUnreferenceRegEntry @ 0x140208DE4 (WmipUnreferenceRegEntry.c)
 *     IofCompleteRequest @ 0x14027B290 (IofCompleteRequest.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     WmipQueryWmiDataBlock @ 0x140725910 (WmipQueryWmiDataBlock.c)
 *     IoWMICompleteRequest @ 0x140725A08 (IoWMICompleteRequest.c)
 *     WmipFindGuid @ 0x140793CEC (WmipFindGuid.c)
 *     WmipQueryWmiRegInfo @ 0x1408614C0 (WmipQueryWmiRegInfo.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IoWMISystemControl(__int64 a1, __int64 a2, IRP *a3)
{
  unsigned int *p_OutboundQuota; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 v6; // r10
  unsigned int v7; // r12d
  unsigned int v8; // esi
  unsigned int MinorFunction; // r15d
  PNAMED_PIPE_CREATE_PARAMETERS Parameters; // r14
  unsigned int LowPart; // r13d
  __int64 v12; // rcx
  __int64 v13; // r15
  unsigned int v14; // eax
  unsigned __int64 v15; // rcx
  unsigned int v16; // r13d
  unsigned int v18; // esi
  unsigned int v20; // r12d
  int v21; // eax
  void *v22; // rcx
  int v23; // edx
  __int16 v24; // r10
  unsigned int v25; // r15d
  __int64 v26; // r11
  unsigned __int16 *v27; // r9
  unsigned int v28; // r8d
  __int64 *v29; // r8
  __int64 *p_CompletionMode; // rcx
  __int64 v31; // r13
  _DWORD *v32; // r8
  int v33; // eax
  unsigned __int16 *v34; // rcx
  unsigned int v35; // ebx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r15
  __int64 RegEntryByProviderId; // rax
  void *Src[2]; // [rsp+40h] [rbp-28h] BYREF
  __int128 v42; // [rsp+50h] [rbp-18h] BYREF
  __int64 v43; // [rsp+B0h] [rbp+48h] BYREF
  __int64 v44; // [rsp+B8h] [rbp+50h]
  unsigned __int16 *v45; // [rsp+C0h] [rbp+58h] BYREF
  __int64 *v46; // [rsp+C8h] [rbp+60h]

  v44 = a2;
  v43 = a1;
  p_OutboundQuota = 0LL;
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v6 = a2;
  LODWORD(v43) = 0;
  v7 = 0;
  LODWORD(v45) = 0;
  v8 = 0;
  LODWORD(v46) = 0;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( (unsigned __int8)MinorFunction > 0xBu
    || CurrentStackLocation->Parameters.WMI.ProviderId != a2
    || !WmipGuidList && (_BYTE)MinorFunction != 11 && (_BYTE)MinorFunction != 8 )
  {
    v18 = -1073741808;
    goto LABEL_45;
  }
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( (_BYTE)MinorFunction == 11 || (_BYTE)MinorFunction == 8 )
    goto LABEL_10;
  if ( (unsigned __int8)WmipFindGuid(
                          (unsigned int)WmipGuidList,
                          7,
                          CurrentStackLocation->Parameters.QueryDirectory.FileName,
                          (unsigned int)&v43,
                          (__int64)&v45) )
  {
    if ( (unsigned __int8)(MinorFunction - 1) <= 2u || (_BYTE)MinorFunction == 9 )
    {
      LODWORD(v46) = Parameters[1].MaximumInstances;
      if ( (Parameters[1].ReadMode & 0x80u) == 0 )
      {
        v35 = -1073741162;
        goto LABEL_53;
      }
    }
    v7 = v43;
    v8 = (unsigned int)v45;
    v6 = v44;
LABEL_10:
    v12 = MinorFunction;
    if ( MinorFunction <= 5 )
    {
      if ( MinorFunction == 5 )
        goto LABEL_80;
      if ( !(_BYTE)MinorFunction )
      {
        if ( LowPart >= 0x3C )
        {
          if ( v7 > 1 )
          {
            v13 = v44;
LABEL_16:
            if ( v8 )
            {
              Parameters[1].ReadMode &= ~0x10u;
              v14 = (8 * v8 + 67) & 0xFFFFFFF8;
              Parameters[1].MaximumInstances = v8;
              Parameters[1].CompletionMode = v14;
              if ( v14 > LowPart )
              {
                v15 = 0LL;
                v16 = 0;
              }
              else
              {
                p_OutboundQuota = &Parameters[1].OutboundQuota;
                v15 = (unsigned __int64)Parameters + v14;
                v16 = LowPart - v14;
              }
              return (unsigned int)WmipQueryWmiDataBlock(v13, a3, v7, 0LL, v8, p_OutboundQuota, v16, v15);
            }
            else
            {
              return (unsigned int)IoWMICompleteRequest(v12, a2, a3, -1073741162, 0);
            }
          }
          RegEntryByProviderId = WmipFindRegEntryByProviderId(Parameters->ReadMode);
          if ( RegEntryByProviderId )
          {
            v13 = *(_QWORD *)(RegEntryByProviderId + 16);
            if ( v7 )
              v8 = 1;
            else
              v8 = *(_DWORD *)(RegEntryByProviderId + 52);
            WmipUnreferenceRegEntry(RegEntryByProviderId);
            goto LABEL_16;
          }
          return (unsigned int)IoWMICompleteRequest(v38, v37, a3, -1073741163, 0);
        }
        return (unsigned int)IoWMICompleteRequest(MinorFunction, a2, a3, -1073741789, 60);
      }
      if ( MinorFunction == 1 )
      {
        if ( v7 > 1 )
        {
          v39 = v44;
        }
        else
        {
          v36 = WmipFindRegEntryByProviderId(Parameters->ReadMode);
          if ( !v36 )
            return (unsigned int)IoWMICompleteRequest(v38, v37, a3, -1073741163, 0);
          v39 = *(_QWORD *)(v36 + 16);
          WmipUnreferenceRegEntry(v36);
        }
        return (unsigned int)WmipQueryWmiDataBlock(
                               v39,
                               a3,
                               v7,
                               (unsigned int)v46,
                               1u,
                               &Parameters[1].OutboundQuota,
                               LowPart - Parameters[1].InboundQuota,
                               (unsigned __int64)Parameters + Parameters[1].InboundQuota);
      }
      if ( MinorFunction != 2 && MinorFunction != 3 )
        goto LABEL_80;
      v18 = -1073741114;
      a3->IoStatus.Status = -1073741114;
LABEL_81:
      a3->IoStatus.Information = 0LL;
      goto LABEL_46;
    }
    if ( MinorFunction == 6 || MinorFunction == 7 )
    {
LABEL_80:
      v18 = 0;
      a3->IoStatus.Status = 0;
      goto LABEL_81;
    }
    if ( MinorFunction != 8 )
    {
      if ( MinorFunction == 9 )
      {
        v18 = -1073741808;
        a3->IoStatus.Status = -1073741808;
        goto LABEL_81;
      }
      if ( MinorFunction != 11 )
        return (unsigned int)-1073741808;
    }
    v45 = 0LL;
    LODWORD(v43) = 0;
    v20 = 0;
    v42 = 0LL;
    *(_OWORD *)Src = 0LL;
    v21 = WmipQueryWmiRegInfo(v6, &v43, Src, &v45);
    v22 = Src[1];
    v18 = v21;
    if ( v21 >= 0 )
    {
      v23 = v43;
      if ( (v43 & 0x20) == 0 && !Src[1] )
      {
        v18 = -1073741808;
LABEL_44:
        a3->IoStatus.Information = v20;
LABEL_45:
        a3->IoStatus.Status = v18;
LABEL_46:
        IofCompleteRequest(a3, 0);
        return v18;
      }
      v24 = (__int16)Src[0];
      v46 = WmipGuidList;
      if ( (v43 & 0x20) != 0 )
      {
        v26 = 0LL;
        v25 = 248;
      }
      else
      {
        v23 = v43 | 4;
        v25 = LOWORD(Src[0]) + 250;
        LODWORD(v43) = v43 | 4;
        v26 = 248LL;
      }
      v27 = (unsigned __int16 *)&v42;
      if ( v45 )
        v27 = v45;
      v45 = v27;
      if ( v25 < 0xF8 || (v28 = v25 + *v27 + 2, v28 < v25) )
      {
        v18 = -1073741675;
      }
      else
      {
        Parameters->NamedPipeType = v28;
        v20 = v28;
        v18 = 0;
        if ( v28 > LowPart )
        {
          v20 = 4;
        }
        else
        {
          v29 = v46;
          p_CompletionMode = (__int64 *)&Parameters[1].CompletionMode;
          v31 = 7LL;
          Parameters->ReadMode = 0;
          Parameters->InboundQuota = 7;
          v32 = v29 + 2;
          Parameters->MaximumInstances = 0;
          Parameters->CompletionMode = v25;
          do
          {
            *(_OWORD *)(p_CompletionMode - 3) = *((_OWORD *)v32 - 1);
            *((_DWORD *)p_CompletionMode - 2) = v32[1] | v23;
            *p_CompletionMode = v26;
            p_CompletionMode += 4;
            v33 = *v32;
            v32 += 6;
            *((_DWORD *)p_CompletionMode - 9) = v33;
            --v31;
          }
          while ( v31 );
          if ( (v23 & 4) != 0 )
          {
            LOWORD(Parameters[6].CompletionMode) = v24;
            memmove((char *)&Parameters[6].CompletionMode + 2, Src[1], LOWORD(Src[0]));
            v27 = v45;
          }
          v34 = (unsigned __int16 *)((char *)Parameters + v25);
          *v34 = *v27;
          memmove(v34 + 1, *((const void **)v45 + 1), *v45);
          v22 = Src[1];
        }
      }
    }
    if ( v22 )
      ExFreePoolWithTag(v22, 0);
    goto LABEL_44;
  }
  v35 = -1073741163;
LABEL_53:
  a3->IoStatus.Status = v35;
  IofCompleteRequest(a3, 0);
  return v35;
}
