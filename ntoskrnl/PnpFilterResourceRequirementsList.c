__int64 __fastcall PnpFilterResourceRequirementsList(_DWORD *Src, unsigned int *a2, unsigned int **a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  unsigned int *v6; // r12
  int v8; // r15d
  unsigned int *Pool2; // rax
  unsigned int *v10; // r13
  unsigned int *v11; // rdi
  __int64 v12; // r11
  unsigned __int8 *v13; // rcx
  unsigned int v14; // eax
  __int64 i; // r10
  unsigned int v16; // r9d
  _DWORD *v17; // r14
  int v18; // r9d
  int v19; // r10d
  _DWORD *v20; // rdx
  _DWORD *v21; // r8
  bool v22; // zf
  int v23; // ecx
  int v24; // r8d
  __int64 v25; // r11
  struct _IO_RESOURCE_DESCRIPTOR *v26; // r10
  unsigned __int64 v27; // r9
  int v28; // edx
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v29; // rax
  unsigned int v30; // ecx
  int v31; // r15d
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v32; // r8
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v33; // r13
  unsigned int v34; // ecx
  struct _IO_RESOURCE_DESCRIPTOR *v35; // rdi
  UCHAR Type; // al
  UCHAR ShareDisposition; // dl
  ULONGLONG Vector; // r8
  ULONGLONG Length; // r10
  ULONGLONG v40; // r9
  unsigned __int64 v41; // r11
  UCHAR v42; // al
  UCHAR v43; // r12
  ULONGLONG v44; // rcx
  ULONGLONG v45; // rax
  UCHAR v46; // cl
  struct _IO_RESOURCE_DESCRIPTOR *m; // rdi
  __int64 LowPart; // rax
  int v49; // ecx
  unsigned int v50; // eax
  unsigned int v51; // edi
  unsigned int *v52; // rax
  unsigned int *v53; // rdx
  unsigned int v54; // eax
  int v55; // edi
  _DWORD *v56; // r9
  _DWORD *v57; // rcx
  unsigned __int64 v58; // r8
  unsigned __int64 v59; // r10
  __int16 v60; // ax
  char *v61; // rcx
  struct _IO_RESOURCE_DESCRIPTOR *k; // rax
  struct _IO_RESOURCE_DESCRIPTOR *j; // rax
  int v65; // [rsp+2Ch] [rbp-75h]
  UCHAR v66; // [rsp+2Ch] [rbp-75h]
  PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor; // [rsp+30h] [rbp-71h]
  unsigned int v68; // [rsp+38h] [rbp-69h]
  int v69; // [rsp+3Ch] [rbp-65h]
  __int64 v70; // [rsp+40h] [rbp-61h]
  __int16 v71; // [rsp+48h] [rbp-59h]
  ULONG v72; // [rsp+50h] [rbp-51h]
  unsigned int v73; // [rsp+54h] [rbp-4Dh]
  int v74; // [rsp+58h] [rbp-49h]
  int v75; // [rsp+5Ch] [rbp-45h]
  ULONGLONG Start; // [rsp+60h] [rbp-41h] BYREF
  int v77; // [rsp+68h] [rbp-39h]
  int v78; // [rsp+6Ch] [rbp-35h]
  unsigned __int64 v79; // [rsp+70h] [rbp-31h]
  ULONGLONG MinimumAddress; // [rsp+78h] [rbp-29h] BYREF
  ULONGLONG MaximumAddress; // [rsp+80h] [rbp-21h] BYREF
  ULONGLONG Alignment; // [rsp+88h] [rbp-19h] BYREF
  _DWORD *v83; // [rsp+90h] [rbp-11h]
  ULONGLONG v84; // [rsp+98h] [rbp-9h]
  ULONGLONG v85; // [rsp+A0h] [rbp-1h]
  unsigned int *v86; // [rsp+A8h] [rbp+7h]
  __int64 v87; // [rsp+B0h] [rbp+Fh]
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v88; // [rsp+108h] [rbp+67h]
  UCHAR v89; // [rsp+108h] [rbp+67h]

  v4 = 0;
  v83 = 0LL;
  v6 = a2;
  v69 = 0;
  *a3 = 0LL;
  v8 = 0;
  *a4 = 0;
  if ( !Src || !Src[7] )
  {
    if ( a2 && *a2 )
      *a3 = (unsigned int *)PnpCmResourcesToIoResources(Src, a2, 1LL);
    return 0LL;
  }
  Pool2 = (unsigned int *)ExAllocatePool2(256LL, (unsigned int)*Src, 1970499664LL);
  v86 = Pool2;
  v10 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  memmove(Pool2, Src, (unsigned int)*Src);
  if ( !v6 || !*v6 )
    goto LABEL_153;
  v11 = v6 + 1;
  v12 = *v6;
  v13 = (unsigned __int8 *)(v6 + 1);
  do
  {
    v14 = *((_DWORD *)v13 + 3);
    v13 += 16;
    v8 += v14;
    if ( v14 )
    {
      for ( i = v14; i; --i )
      {
        v16 = 0;
        if ( *v13 == 5 )
        {
          v16 = *((_DWORD *)v13 + 1);
        }
        else if ( (unsigned int)*v13 - 128 >= 2 && (unsigned __int8)(*v13 - 1) <= 6u )
        {
          goto LABEL_12;
        }
        --v8;
LABEL_12:
        v13 += v16 + 20;
      }
    }
    --v12;
  }
  while ( v12 );
  if ( !v8 )
  {
LABEL_153:
    *a3 = v10;
    return 0LL;
  }
  v17 = v10 + 8;
  v18 = v10[7] - 1;
  v75 = 0;
  v19 = 0;
  v20 = v10 + 8;
  if ( v18 >= 0 )
  {
    do
    {
      v21 = v20 + 2;
      v20 += 8 * (unsigned int)v20[1] + 2;
      while ( v21 < v20 )
      {
        v22 = *((_BYTE *)v21 + 1) == 0;
        v23 = v19 + 1;
        *((_BYTE *)v21 + 3) = 0;
        if ( !v22 )
          v23 = v19;
        v21 += 8;
        v19 = v23;
      }
      --v18;
    }
    while ( v18 >= 0 );
    v75 = v19;
  }
  v78 = v10[7] - 1;
  v24 = v78;
  v74 = v78;
  if ( v78 >= 0 )
  {
    while ( 1 )
    {
      v71 = *(_WORD *)v17;
      if ( *(_WORD *)v17 == 0xFFFF )
        v71 = 1;
      v25 = (unsigned int)v17[1];
      v26 = (struct _IO_RESOURCE_DESCRIPTOR *)(v17 + 2);
      *(_WORD *)v17 = 0;
      v27 = (unsigned __int64)&v17[8 * v25 + 2];
      v87 = v25;
      v79 = v27;
      if ( v17 + 2 == (_DWORD *)v27 )
      {
        *(_WORD *)v17 = -1;
        --v10[7];
        goto LABEL_86;
      }
      v28 = 1;
      v29 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)v11;
      v30 = 0;
      v65 = 1;
      v88 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)v11;
      v73 = 0;
      if ( !*v6 )
        goto LABEL_80;
      v77 = v8;
      v31 = 1;
      do
      {
        v32 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)(&v29->u.Memory48 + 1);
        v72 = 0;
        Descriptor = (PCM_PARTIAL_RESOURCE_DESCRIPTOR)(&v29->u.Memory48 + 1);
        if ( !v29->u.Generic.Length )
          goto LABEL_78;
        v33 = v88;
        do
        {
          if ( v32->Type == 5 )
          {
            LowPart = v32->u.Generic.Start.LowPart;
            goto LABEL_76;
          }
          if ( v32->Type == 129 || (unsigned __int8)(v32->Type - 1) > 6u )
            goto LABEL_75;
          v34 = 0;
          v68 = 0;
          while ( 1 )
          {
            v35 = v26;
            if ( (unsigned __int64)v26 < v27 )
              break;
LABEL_74:
            v68 = ++v34;
            if ( v34 >= 2 )
              goto LABEL_75;
          }
          Type = v32->Type;
          v89 = v32->Type;
          while ( v35->Type != Type || v35->Spare1 )
          {
LABEL_40:
            if ( (unsigned __int64)++v35 >= v27 )
            {
              v32 = Descriptor;
              v26 = (struct _IO_RESOURCE_DESCRIPTOR *)(v17 + 2);
              goto LABEL_73;
            }
            Type = v89;
          }
          ShareDisposition = v35->ShareDisposition;
          Vector = 0LL;
          Length = 0LL;
          Start = 0LL;
          v40 = 0LL;
          MinimumAddress = 0LL;
          v41 = 1LL;
          MaximumAddress = 0LL;
          v42 = Descriptor->ShareDisposition;
          v70 = 1LL;
          Alignment = 1LL;
          v43 = v42;
          if ( (unsigned __int8)(v42 - 1) > 2u )
            v43 = ShareDisposition;
          if ( (unsigned __int8)(ShareDisposition - 1) > 2u )
            ShareDisposition = v43;
          v66 = ShareDisposition;
          if ( v89 != 1 )
          {
            if ( v89 == 2 )
            {
              Vector = Descriptor->u.Interrupt.Vector;
              v44 = Vector;
LABEL_49:
              Length = v35->u.Port.Length;
              v40 = v35->u.Port.Alignment;
LABEL_50:
              v45 = 1LL;
              goto LABEL_51;
            }
            if ( v89 != 3 )
            {
              if ( v89 == 4 )
              {
                v44 = Descriptor->u.Generic.Start.LowPart;
                Vector = v44;
                goto LABEL_49;
              }
              if ( v89 == 6 )
              {
                Length = v35->u.Port.Alignment;
                v40 = v35->u.Port.MinimumAddress.LowPart;
                Vector = Descriptor->u.Generic.Start.LowPart;
                v41 = Descriptor->u.Interrupt.Vector;
                v45 = v35->u.Port.Length;
                v44 = (unsigned int)(v41 + Vector - 1);
                goto LABEL_71;
              }
              if ( v89 != 7 )
              {
                v44 = 0LL;
                goto LABEL_50;
              }
            }
          }
          v85 = RtlCmDecodeMemIoResource(Descriptor, &Start);
          v84 = v85 + Start - 1;
          v45 = RtlIoDecodeMemIoResource(v35, &Alignment, &MinimumAddress, &MaximumAddress);
          Length = MinimumAddress;
          v40 = MaximumAddress;
          Vector = Start;
          v44 = v84;
          v41 = v85;
          ShareDisposition = v66;
LABEL_71:
          v70 = v45;
LABEL_51:
          if ( v68 )
          {
            v31 = 0;
            if ( v40 >= v44
              && v43 == ShareDisposition
              && Length <= Vector
              && v45 >= v41
              && ((Alignment - 1) & Vector) == 0 )
            {
              switch ( v89 )
              {
                case 1u:
                  goto LABEL_133;
                case 2u:
                  goto LABEL_137;
                case 3u:
                  goto LABEL_133;
                case 4u:
LABEL_137:
                  v35->u.Port.Length = Vector;
                  v35->u.Port.Alignment = v44;
                  break;
                case 6u:
                  v35->u.Port.Alignment = Vector;
                  v35->u.Port.MinimumAddress.LowPart = Vector + v70 - 1;
                  break;
                case 7u:
LABEL_133:
                  v35->u.Port.MinimumAddress.QuadPart = Vector;
                  v35->u.Port.MaximumAddress.QuadPart = Vector + v70 - 1;
                  break;
              }
              ++*(_WORD *)v17;
              v26 = (struct _IO_RESOURCE_DESCRIPTOR *)(v17 + 2);
              v22 = (v35->Option & 8) == 0;
              v32 = Descriptor;
              v35->Spare1 = 0x80;
              v35->Flags = Descriptor->Flags;
              if ( !v22 )
              {
                for ( j = v35 - 1; j >= v26; --j )
                {
                  j->Type = 0;
                  --v17[1];
                  if ( j->Option != 8 )
                    break;
                }
              }
              v27 = v79;
              v35->Option = 1;
              while ( (unsigned __int64)++v35 < v27 && (v35->Option & 8) != 0 )
              {
                v35->Type = 0;
                --v17[1];
              }
LABEL_73:
              v34 = v68;
              goto LABEL_74;
            }
LABEL_106:
            v27 = v79;
            goto LABEL_40;
          }
          if ( Length != Vector || v43 != ShareDisposition || v40 < v44 || v45 < v41 )
            goto LABEL_106;
          if ( v40 != v44 )
            v31 = 0;
          ++*(_WORD *)v17;
          v22 = (v35->Option & 8) == 0;
          v35->Spare1 = 0x80;
          if ( !v22 )
          {
            for ( k = v35 - 1; k >= (struct _IO_RESOURCE_DESCRIPTOR *)(v17 + 2); --k )
            {
              k->Type = 0;
              --v17[1];
              if ( k->Option != 8 )
                break;
            }
          }
          v46 = v35->Type;
          v35->Option = 1;
          v35->Flags = Descriptor->Flags;
          if ( ((v46 - 1) & 0xF9) != 0 || v46 == 5 )
          {
            if ( v46 == 6 )
            {
              v35->u.Port.Alignment = Vector;
              v35->u.Port.MinimumAddress.LowPart = Vector + v70 - 1;
            }
          }
          else
          {
            v35->u.Port.MinimumAddress.QuadPart = Vector;
            v35->u.Port.Alignment = 1;
            v35->u.Port.MaximumAddress.QuadPart = Vector + v70 - 1;
          }
          v27 = v79;
          for ( m = v35 + 1; (unsigned __int64)m < v27 && (m->Option & 8) != 0; ++m )
          {
            m->Type = 0;
            --v17[1];
          }
          v32 = Descriptor;
LABEL_75:
          LowPart = 0LL;
LABEL_76:
          v26 = (struct _IO_RESOURCE_DESCRIPTOR *)(v17 + 2);
          v32 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)((char *)v32 + LowPart + 20);
          Descriptor = v32;
          ++v72;
        }
        while ( v72 < v33->u.Generic.Length );
        v6 = a2;
        v26 = (struct _IO_RESOURCE_DESCRIPTOR *)(v17 + 2);
        v30 = v73;
        v65 = v31;
LABEL_78:
        ++v30;
        v29 = v32;
        v88 = v32;
        v73 = v30;
      }
      while ( v30 < *v6 );
      v8 = v77;
      v11 = v6 + 1;
      v10 = v86;
      v28 = v65;
      v24 = v74;
      LODWORD(v25) = v87;
LABEL_80:
      if ( *(_WORD *)v17 != (_WORD)v8 )
        goto LABEL_107;
      v49 = v17[1];
      if ( v49 != v8 && (v49 != v8 + 1 || *((_BYTE *)v17 + 9) != 0x80) )
      {
        v69 += v49;
        *(_WORD *)v17 = v71;
        goto LABEL_85;
      }
      if ( v83 )
      {
LABEL_107:
        *(_WORD *)v17 = -1;
        --v10[7];
        goto LABEL_85;
      }
      v69 += v49;
      v83 = v17;
      *(_WORD *)v17 = v71;
      if ( v28 )
        *a4 = 1;
LABEL_85:
      v17[1] = v25;
      v17 = (_DWORD *)v27;
LABEL_86:
      v74 = --v24;
      if ( v24 < 0 )
      {
        v19 = v75;
        break;
      }
    }
  }
  v50 = v10[7];
  if ( v50 )
  {
    v51 = 32 * (v69 - v19) + 8 * (v50 - 1 + 4 * (v50 - 1) + 9);
    v52 = (unsigned int *)ExAllocatePool2(256LL, v51, 1970499664LL);
    v53 = v52;
    if ( v52 )
    {
      *v52 = v51;
      v52[1] = v6[1];
      v52[2] = v6[2];
      v52[3] = v10[3];
      v54 = v10[7];
      if ( v54 > 1 )
        *a4 = 0;
      v55 = v78;
      v56 = v53 + 8;
      v53[7] = v54;
      if ( v55 >= 0 )
      {
        v57 = v10 + 8;
        do
        {
          v58 = (unsigned __int64)(v57 + 2);
          v59 = (unsigned __int64)&v57[8 * v57[1] + 2];
          if ( *(_WORD *)v57 != 0xFFFF )
          {
            *(_WORD *)v56 = *(_WORD *)v57;
            v60 = *((_WORD *)v57 + 1);
            v61 = (char *)(v56 + 2);
            *((_WORD *)v56 + 1) = v60;
            if ( *(_BYTE *)(v58 + 1) == 0x80 )
            {
              *v53 -= 32;
            }
            else
            {
              *((_WORD *)v56 + 4) = -32767;
              v61 = (char *)(v56 + 10);
              *(_DWORD *)((char *)v56 + 10) = 3;
              *((_WORD *)v56 + 7) = 0;
              v56[4] = 1;
            }
            while ( v58 < v59 )
            {
              if ( *(_BYTE *)(v58 + 1) )
              {
                *(_OWORD *)v61 = *(_OWORD *)v58;
                *((_OWORD *)v61 + 1) = *(_OWORD *)(v58 + 16);
                v61 += 32;
              }
              v58 += 32LL;
            }
            v56[1] = (v61 - (char *)v56 - 8) >> 5;
            v56[4] = 1;
            v56 = v61;
          }
          --v55;
          v57 = (_DWORD *)v59;
        }
        while ( v55 >= 0 );
      }
      *a3 = v53;
      ExFreePoolWithTag(v10, 0);
      return 0LL;
    }
    v4 = -1073741670;
  }
  else
  {
    *a3 = (unsigned int *)PnpCmResourcesToIoResources(0xFFFFLL, v6, 1LL);
  }
  ExFreePoolWithTag(v10, 0);
  return v4;
}
