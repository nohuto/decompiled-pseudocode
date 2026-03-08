/*
 * XREFs of AAHalftoneBitmap @ 0x1C0253604
 * Callers:
 *     HT_HalftoneBitmap @ 0x1C025325C (HT_HalftoneBitmap.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     GetDstBFInfo @ 0x1C0253EF0 (GetDstBFInfo.c)
 *     ValidateHTSI @ 0x1C025409C (ValidateHTSI.c)
 *     CreateDyesColorMappingTable @ 0x1C0257C98 (CreateDyesColorMappingTable.c)
 *     FindBGRMapCache @ 0x1C0257DE8 (FindBGRMapCache.c)
 *     SetGrayColorTable @ 0x1C025E3B0 (SetGrayColorTable.c)
 *     SetupAAHeader @ 0x1C025E588 (SetupAAHeader.c)
 *     InitializeFUDI @ 0x1C025FE74 (InitializeFUDI.c)
 */

__int64 __fastcall AAHalftoneBitmap(__int64 *a1)
{
  __int64 v2; // r13
  __int64 v3; // r12
  __int64 v4; // rdi
  int DyesColorMappingTable; // ebx
  __int64 v7; // r9
  int v8; // edx
  int v9; // r14d
  unsigned int v10; // ebx
  int v11; // r12d
  __int64 v12; // rax
  char v13; // r12
  _OWORD *v14; // rdx
  _OWORD *v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // r8
  __int64 (__fastcall *v18)(int, int, int, int, __int64); // rcx
  __int64 (__fastcall *v19)(int, int, int, int, __int64, __int64, __int64, int); // rax
  __int64 (__fastcall *v20)(int, int, int, int, __int64, __int64, __int64, int, int); // rax
  bool v21; // zf
  int v22; // ecx
  char v23; // al
  unsigned __int8 v24; // r14
  char v25; // cl
  char v26; // al
  char v27; // al
  __int64 v28; // r11
  void *v29; // r10
  unsigned __int8 *v30; // rdx
  char v31; // al
  char v32; // al
  bool v33; // zf
  BOOL v34; // eax
  __int64 v35; // rcx
  void *v36; // [rsp+20h] [rbp-88h]
  int v37; // [rsp+30h] [rbp-78h]
  int v38; // [rsp+34h] [rbp-74h]
  __int64 v39; // [rsp+38h] [rbp-70h]
  __int64 (__fastcall *v40)(__int64); // [rsp+58h] [rbp-50h] BYREF
  __int64 v41; // [rsp+60h] [rbp-48h]
  unsigned __int8 v42; // [rsp+B0h] [rbp+8h]
  BOOL v43; // [rsp+C0h] [rbp+18h]
  int v44; // [rsp+C8h] [rbp+20h]

  v40 = 0LL;
  v2 = *a1;
  v3 = a1[1];
  v4 = a1[6];
  DyesColorMappingTable = ValidateHTSI(a1, 0LL);
  if ( DyesColorMappingTable < 0 )
    goto LABEL_6;
  DyesColorMappingTable = ValidateHTSI(a1, 1LL);
  if ( DyesColorMappingTable < 0 )
    goto LABEL_6;
  DyesColorMappingTable = ValidateHTSI(a1, 2LL);
  if ( DyesColorMappingTable < 0 )
    goto LABEL_6;
  DyesColorMappingTable = SetupAAHeader(a1, v2, v4, &v40);
  if ( DyesColorMappingTable > 0 )
  {
    DyesColorMappingTable = CreateDyesColorMappingTable(a1);
    v38 = DyesColorMappingTable;
    v43 = DyesColorMappingTable > 0;
    if ( DyesColorMappingTable <= 0 )
    {
LABEL_103:
      EngReleaseSemaphore(*(HSEMAPHORE *)(v2 + 8));
LABEL_104:
      EngFreeMem(*(PVOID *)(v4 + 304));
      EngFreeMem(*(PVOID *)(v4 + 312));
      *(_QWORD *)(v4 + 304) = 0LL;
      *(_QWORD *)(v4 + 312) = 0LL;
      return (unsigned int)DyesColorMappingTable;
    }
    v42 = *(_BYTE *)(v3 + 31);
    v8 = *(_DWORD *)v4;
    v44 = *(_DWORD *)v4;
    v41 = *(_QWORD *)(v4 + 136);
    v9 = *(_DWORD *)(*(_QWORD *)(v4 + 304) + 4LL);
    v10 = *(_DWORD *)(v4 + 444);
    v36 = 0LL;
    v37 = *(_DWORD *)(v3 + 56) & 0x2000000;
    if ( v37 )
      v36 = (void *)(v2 + 548);
    v11 = v8 & 0x800;
    if ( v8 >= 0 )
    {
      v39 = v4 + 376;
      memmove(*(void **)(v4 + 376), (const void *)(v2 + 856), 0xC1CuLL);
      v21 = v11 == 0;
      v13 = v44;
      if ( !v21 )
      {
        v14 = *(_OWORD **)(v2 + 7064);
        v15 = *(_OWORD **)(v4 + 336);
        if ( (v44 & 0x1000) != 0 )
        {
          memmove(*(void **)(v4 + 336), v14 + 48, 0x800uLL);
        }
        else
        {
          v16 = 6LL;
          do
          {
            *v15 = *v14;
            v15[1] = v14[1];
            v15[2] = v14[2];
            v15[3] = v14[3];
            v15[4] = v14[4];
            v15[5] = v14[5];
            v15[6] = v14[6];
            v15 += 8;
            *(v15 - 1) = v14[7];
            v14 += 8;
            --v16;
          }
          while ( v16 );
        }
      }
      EngReleaseSemaphore(*(HSEMAPHORE *)(v2 + 8));
    }
    else
    {
      v43 = 0;
      if ( (v8 & 0x800) != 0 )
      {
        v12 = *(_QWORD *)(v2 + 7064);
        *(_QWORD *)(v4 + 336) = v12;
        if ( (v8 & 0x1000) != 0 )
          *(_QWORD *)(v4 + 336) = v12 + 768;
      }
      v39 = v4 + 376;
      v13 = v44;
    }
    if ( (*(_BYTE *)(v4 + 8) & 4) != 0 )
      SetGrayColorTable(*(_QWORD *)(v4 + 384));
    if ( *(_DWORD *)(v4 + 528) )
      InitializeFUDI(v4);
    *(_QWORD *)(v4 + 560) -= 4LL;
    v17 = v42;
    if ( v42 > 0xF8u )
    {
      if ( v42 != 249 )
      {
        switch ( v42 )
        {
          case 0xFAu:
            v18 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_B332_XLATE;
            v19 = OutputAATo8BPP_B332;
            goto LABEL_88;
          case 0xFBu:
            BYTE1(v36) = *(_BYTE *)(*(_QWORD *)(v4 + 376) + 17LL);
            v18 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_MONO;
            goto LABEL_94;
          case 0xFCu:
          case 0xFDu:
            v31 = (char)v36;
            if ( (v41 & 3) != 0 )
              v31 = 1;
            LOBYTE(v36) = v31;
            v32 = v9 - 1;
            if ( (v41 & 3) == 0 )
              v32 = v9;
            if ( (v32 & 1) != 0 )
            {
              BYTE3(v36) = 1;
              *(_QWORD *)(v4 + 568) -= 4LL;
            }
            if ( !(_BYTE)v10 )
            {
              v18 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo16BPP_565_RGB;
              v19 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64, int))OutputAATo16BPP_555_RGB;
              v33 = v42 == 0xFD;
              goto LABEL_89;
            }
            if ( (_BYTE)v10 != 4 )
            {
              v18 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo16BPP_ExtBGR;
              goto LABEL_94;
            }
            v18 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo16BPP_555_BGR;
            v20 = OutputAATo16BPP_565_BGR;
            v21 = v42 == 0xFD;
            goto LABEL_65;
        }
        if ( v42 != 254 )
        {
          if ( v42 != 255 )
            goto LABEL_57;
LABEL_58:
          BYTE1(v36) = (v13 & 4) == 0 ? 0x77 : 0;
          v25 = *(_BYTE *)(v4 + 97);
          v26 = (char)v36;
          if ( v25 )
            v26 = 1;
          LOBYTE(v36) = v26;
          v27 = v9 - 1;
          if ( !v25 )
            v27 = v9;
          if ( (v27 & 1) != 0 )
          {
            BYTE3(v36) = 1;
            *(_QWORD *)(v4 + 568) -= 4LL;
          }
          v18 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo4BPP;
          v20 = OutputAAToVGA16;
          v21 = v42 == 2;
LABEL_65:
          if ( !v21 )
            v18 = (__int64 (__fastcall *)(int, int, int, int, __int64))v20;
          goto LABEL_94;
        }
        v17 = *(_QWORD *)(v4 + 400);
        v28 = a1[7];
        if ( v28 )
        {
          v29 = *(void **)(v4 + 400);
          if ( v17 )
          {
            v30 = (unsigned __int8 *)&VGA256Xlate;
            LODWORD(v7) = 366;
            do
            {
              *(_BYTE *)v17++ = *(_BYTE *)(*v30++ + v28);
              v21 = (_DWORD)v7 == 1;
              v7 = (unsigned int)(v7 - 1);
            }
            while ( !v21 );
          }
        }
        else
        {
          v29 = &VGA256Xlate;
        }
        v36 = v29;
        v18 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAAToVGA256;
        LOBYTE(v17) = v42;
LABEL_94:
        *(_QWORD *)(v4 + 272) = v18;
        if ( v18 )
        {
          *(_QWORD *)(v4 + 280) = v36;
          if ( (*(_DWORD *)v4 & 0x800) != 0 )
          {
            LOBYTE(v7) = v10;
            GetDstBFInfo(v4, *(_QWORD *)(a1[2] + 8), v17, v7);
          }
          DyesColorMappingTable = v40(v4);
          v34 = v43;
        }
        else
        {
          DyesColorMappingTable = v38;
          v34 = v43;
        }
        if ( (v13 & 0x18) != 0 )
        {
          v35 = *(_QWORD *)(v4 + 392);
          if ( v35 )
          {
            FindBGRMapCache(v35, 0LL);
            v34 = v43;
          }
        }
        if ( v34 )
          goto LABEL_104;
        goto LABEL_103;
      }
    }
    else if ( v42 != 248 )
    {
      if ( v42 != 1 )
      {
        if ( v42 != 2 )
        {
          switch ( v42 )
          {
            case 5u:
              *(_WORD *)((char *)&v36 + 1) = v10 >> 8;
              BYTE3(v36) = HIBYTE(v10);
              LOBYTE(v36) = v10;
              if ( !(_BYTE)v10 )
              {
                v18 = OutputAATo24BPP_RGB;
                goto LABEL_94;
              }
              v18 = OutputAATo24BPP_BGR;
              v20 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64, int, int))OutputAATo24BPP_ORDER;
              break;
            case 6u:
              *(_WORD *)((char *)&v36 + 1) = v10 >> 8;
              BYTE3(v36) = HIBYTE(v10);
              LOBYTE(v36) = v10;
              if ( !(_BYTE)v10 )
              {
                v18 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo32BPP_RGB;
                goto LABEL_94;
              }
              v18 = OutputAATo32BPP_BGR;
              v20 = (__int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64, int, int))OutputAATo32BPP_ORDER;
              break;
            case 0xF5u:
            case 0xF6u:
              goto LABEL_92;
            case 0xF7u:
              v18 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_K_B332_XLATE;
              v19 = OutputAATo8BPP_K_B332;
LABEL_88:
              v33 = v37 == 0;
LABEL_89:
              if ( v33 )
                v18 = (__int64 (__fastcall *)(int, int, int, int, __int64))v19;
              goto LABEL_94;
            default:
LABEL_57:
              v18 = 0LL;
              v38 = -11;
              goto LABEL_94;
          }
          v21 = (_BYTE)v10 == 4;
          goto LABEL_65;
        }
        goto LABEL_58;
      }
      BYTE1(v36) = -((v13 & 4) == 0);
      if ( *(_BYTE *)(v4 + 97) )
      {
        v22 = 8 - *(unsigned __int8 *)(v4 + 97);
        v23 = v9;
        v9 -= v22;
        if ( v9 < 0 )
        {
          LOBYTE(v22) = v23;
          BYTE2(v36) = -(char)v9;
          LOBYTE(v9) = 0;
        }
        LOBYTE(v36) = v22;
      }
      v24 = v9 & 7;
      BYTE3(v36) = v24;
      if ( v24 )
        *(_QWORD *)(v4 + 568) += -4LL * v24;
      v18 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo1BPP;
      goto LABEL_94;
    }
LABEL_92:
    v36 = *(&p8BPPXlate + *(unsigned __int8 *)(*(_QWORD *)v39 + 16LL));
    v18 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_XLATE;
    if ( (unsigned __int8)(v42 + 8) > 1u )
      v18 = (__int64 (__fastcall *)(int, int, int, int, __int64))OutputAATo8BPP_K_XLATE;
    goto LABEL_94;
  }
  *(_QWORD *)(v4 + 304) = 0LL;
  *(_QWORD *)(v4 + 312) = 0LL;
LABEL_6:
  EngReleaseSemaphore(*(HSEMAPHORE *)(v2 + 8));
  return (unsigned int)DyesColorMappingTable;
}
