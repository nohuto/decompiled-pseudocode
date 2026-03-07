__int64 __fastcall Isoch_Stage_CompleteTD(unsigned __int8 *a1, int a2, int a3, char a4, _BYTE *a5, _DWORD *a6)
{
  __int64 *v6; // rbx
  int v7; // r13d
  int v8; // edi
  int v11; // r12d
  __int64 result; // rax
  __int64 v13; // rsi
  __int64 v14; // r15
  unsigned int v15; // edi
  __int64 v16; // rdx
  __int64 v17; // rdx
  int v18; // r8d
  int v19; // edx
  __int64 v20; // rdi
  __int64 v21; // rbp
  KIRQL v22; // r15
  __int64 v23; // r8
  unsigned __int8 *v24; // rbp
  __int64 *v25; // r15
  __int64 *v26; // rdi
  __int64 *v27; // r15
  __int64 *v28; // rdi
  __int64 v29; // rdx
  int v30; // eax
  int v31; // edx
  unsigned int v32; // r8d
  __int64 *v33; // rax
  __int64 **v34; // rcx
  int v35; // eax
  __int64 v36; // r9
  _DWORD *v37; // rcx
  int v38; // r8d
  __int64 v39; // rdx
  unsigned int v40; // eax
  int v41; // eax
  _DWORD *v42; // rcx
  int v43; // eax
  struct _MDL *v44; // rcx
  __int64 v45; // r8
  KIRQL v46; // di
  KIRQL v47; // dl
  __int64 v48; // rdx
  __int64 v49; // rcx
  int v50; // edx
  __int64 v51; // rdx
  int v52; // r8d
  __int64 **v53; // rcx
  int v54; // edx
  int v55; // [rsp+20h] [rbp-98h]
  __int64 v56; // [rsp+70h] [rbp-48h]
  __int64 v57; // [rsp+C0h] [rbp+8h]
  char v59; // [rsp+D8h] [rbp+20h]

  v59 = a4;
  v6 = *(__int64 **)a1;
  v7 = a3;
  v8 = *((_DWORD *)a1 + 12);
  v11 = -1073545216;
  *a6 = 0;
  result = (__int64)a5;
  v13 = v6[7];
  v14 = v6[6] + 140;
  *a5 = 0;
  v15 = v8 - 1;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( *(_DWORD *)(v14 + 12 * v16 + 8) == -1 )
    {
      result = (int)v16;
      v57 = (int)v16;
      if ( (int)v16 >= 0 )
      {
        v49 = 12LL * (int)v16;
        v56 = v49;
        do
        {
          if ( *(_DWORD *)(v49 + v14 + 8) != -1 )
            break;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v50 = *(unsigned __int8 *)(*(_QWORD *)(v13 + 48) + 135LL);
            LOBYTE(v50) = 2;
            WPP_RECORDER_SF_DDqq(
              *(_QWORD *)(*(_QWORD *)(v13 + 56) + 80LL),
              v50,
              a3,
              24,
              (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
              *(_BYTE *)(*(_QWORD *)(v13 + 48) + 135LL),
              *(_DWORD *)(*(_QWORD *)(v13 + 56) + 144LL),
              v6[3],
              (char)a1);
            result = v57;
            v49 = v56;
          }
          --result;
          *(_DWORD *)(v49 + v14 + 8) = -1073545216;
          v49 -= 12LL;
          v57 = result;
          v56 = v49;
        }
        while ( result >= 0 );
        v7 = a3;
        a4 = v59;
      }
    }
  }
  v17 = v14 + 12LL * v15;
  if ( *(_DWORD *)(v17 + 8) == -1 )
  {
    result = (unsigned int)(a2 - 26);
    if ( (unsigned int)result > 2 || v7 )
    {
      if ( a2 == 1 )
      {
LABEL_6:
        v11 = 0;
      }
      else
      {
        switch ( a2 )
        {
          case 0:
            v11 = -1;
            break;
          case 2:
            v11 = -1073741805;
            break;
          case 3:
          case 31:
            v11 = -1073741806;
            break;
          case 6:
            v11 = -1073741820;
            break;
          case 10:
            v11 = -1073741803;
            break;
          case 13:
          case 26:
          case 28:
            goto LABEL_6;
          case 20:
            v11 = -1073741804;
            break;
          case 23:
            break;
          case 27:
            v11 = -1073610752;
            break;
          case 34:
            v11 = -1073741802;
            break;
          case 199:
            v11 = -1073741807;
            if ( _bittest64((const signed __int64 *)(*(_QWORD *)(v13 + 40) + 336LL), 0x3Eu) )
              v11 = -1073709056;
            break;
          default:
            v11 = -1073741807;
            break;
        }
      }
      *(_DWORD *)(v17 + 8) = v11;
      *((_DWORD *)v6 + 21) += v7;
      result = *(_QWORD *)(v13 + 56);
      if ( *(_DWORD *)(result + 120) == 5 )
        *(_DWORD *)(v17 + 4) = v7;
    }
  }
  v18 = *((_DWORD *)a1 + 11);
  if ( v15 == v18 )
  {
    if ( !a4 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        result = (__int64)WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v54 = *(unsigned __int8 *)(*(_QWORD *)(v13 + 48) + 135LL);
          LOBYTE(v54) = 5;
          return WPP_RECORDER_SF_DDqqD(
                   *(_QWORD *)(*(_QWORD *)(v13 + 56) + 80LL),
                   v54,
                   v18 - *((_DWORD *)a1 + 10) + 1,
                   26,
                   v55,
                   *(_BYTE *)(*(_QWORD *)(v13 + 48) + 135LL),
                   *(_DWORD *)(*(_QWORD *)(v13 + 56) + 144LL),
                   v6[3],
                   (char)a1,
                   (unsigned __int8)v18 - a1[40] + 1);
        }
      }
      return result;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = *(unsigned __int8 *)(*(_QWORD *)(v13 + 48) + 135LL);
      LOBYTE(v19) = 4;
      WPP_RECORDER_SF_DDqqD(
        *(_QWORD *)(*(_QWORD *)(v13 + 56) + 80LL),
        v19,
        v18 - *((_DWORD *)a1 + 10) + 1,
        25,
        v55,
        *(_BYTE *)(*(_QWORD *)(v13 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(v13 + 56) + 144LL),
        v6[3],
        (char)a1,
        v18 - a1[40] + 1);
    }
    if ( *(_BYTE *)(v13 + 280) )
    {
      if ( *((_DWORD *)a1 + 40) )
      {
        TR_SendCompleteStageRequest(v13);
        SecureDmaEnabler_ReleaseResourcesAfterDma(*(_QWORD *)(*(_QWORD *)(v13 + 40) + 104LL), a1 + 128);
      }
    }
    else if ( *((_QWORD *)a1 + 9) )
    {
      v20 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
      v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 40) + 96LL) + 24LL);
      v22 = KfRaiseIrql(2u);
      LOBYTE(v23) = (*(_DWORD *)(v20 + 32) & 1) == 0;
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v21 + 8) + 96LL))(v21, *((_QWORD *)a1 + 9), v23);
      KeLowerIrql(v22);
      *((_QWORD *)a1 + 9) = 0LL;
    }
    *(_BYTE *)(v13 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + 96));
    v24 = *(unsigned __int8 **)a1;
    if ( a1[56] )
    {
      IoFreeMdl(*((PMDL *)a1 + 8));
      *((_QWORD *)a1 + 8) = 0LL;
      a1[56] = 0;
    }
    v25 = (__int64 *)*((_QWORD *)a1 + 1);
    v26 = (__int64 *)(a1 + 8);
    if ( v25 != (__int64 *)(a1 + 8) )
    {
      if ( _bittest64((const signed __int64 *)(*(_QWORD *)(v13 + 40) + 336LL), 0x32u) )
      {
        do
        {
          memset((void *)v25[2], 0, *((unsigned int *)v25 + 11));
          v25 = (__int64 *)*v25;
        }
        while ( v26 != v25 );
      }
      v48 = v13 + 208;
      if ( (__int64 *)*v26 != v26 )
      {
        **((_QWORD **)a1 + 2) = *(_QWORD *)v48;
        *(_QWORD *)(*(_QWORD *)v48 + 8LL) = *((_QWORD *)a1 + 2);
        *(_QWORD *)v48 = *v26;
        *(_QWORD *)(*v26 + 8) = v48;
        *((_QWORD *)a1 + 2) = a1 + 8;
        *v26 = (__int64)v26;
      }
    }
    v27 = (__int64 *)*((_QWORD *)a1 + 3);
    v28 = (__int64 *)(a1 + 24);
    v29 = v13 + 208;
    if ( v27 != (__int64 *)(a1 + 24) )
    {
      if ( _bittest64((const signed __int64 *)(*(_QWORD *)(v13 + 40) + 336LL), 0x32u) )
      {
        do
        {
          memset((void *)v27[2], 0, *((unsigned int *)v27 + 11));
          v27 = (__int64 *)*v27;
        }
        while ( v28 != v27 );
        v29 = v13 + 208;
      }
      if ( (__int64 *)*v28 != v28 )
      {
        **(_QWORD **)(v29 + 8) = *v28;
        *(_QWORD *)(*v28 + 8) = *(_QWORD *)(v29 + 8);
        **((_QWORD **)a1 + 4) = v29;
        *(_QWORD *)(v29 + 8) = *((_QWORD *)a1 + 4);
        *((_QWORD *)a1 + 4) = a1 + 24;
        *v28 = (__int64)v28;
      }
    }
    v30 = v24[128];
    v31 = v24[132];
    --v24[130];
    v32 = v24[129];
    if ( a1 == &v24[v31 * v30 + 144] )
      v24[132] = (v31 + 1) % v32;
    else
      v24[131] = (int)(v32 + v24[131] - 1) % (int)v32;
    ++*((_DWORD *)v6 + 28);
    if ( *((_DWORD *)v6 + 25) != *((_DWORD *)v6 + 24) )
      goto LABEL_51;
    if ( *((_DWORD *)v6 + 16) == 1 )
    {
      v33 = (__int64 *)*v6;
      if ( *(__int64 **)(*v6 + 8) == v6 )
      {
        v34 = (__int64 **)v6[1];
        if ( *v34 == v6 )
        {
          *v34 = v33;
          v33[1] = (__int64)v34;
          v35 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2048))(
                  WdfDriverGlobals,
                  v6[3]);
          if ( v35 >= 0 )
          {
            *((_DWORD *)v6 + 16) = 0;
LABEL_34:
            KeReleaseSpinLock((PKSPIN_LOCK)(v13 + 96), *(_BYTE *)(v13 + 104));
            v36 = v6[6];
            if ( *(_WORD *)(v36 + 2) == 10 )
            {
LABEL_35:
              v37 = (_DWORD *)(v36 + 36);
            }
            else
            {
              switch ( *(_WORD *)(v36 + 2) )
              {
                case '9':
                case ':':
                  v37 = (_DWORD *)(v36 + 52);
                  break;
                default:
                  goto LABEL_35;
              }
            }
            v38 = 0;
            *v37 = *((_DWORD *)v6 + 21);
            v39 = 0LL;
            v40 = *((_DWORD *)v6 + 24);
            if ( v40 )
            {
              while ( 1 )
              {
                v41 = *(_DWORD *)(v36 + 12 * v39 + 148);
                if ( v41 == -1 )
                  break;
                if ( v41 )
                  goto LABEL_90;
                ++v38;
                v42 = (_DWORD *)(v36 + 136);
LABEL_40:
                ++*(_DWORD *)(v13 + 256);
                v39 = (unsigned int)(v39 + 1);
                v40 = *((_DWORD *)v6 + 24);
                if ( (unsigned int)v39 >= v40 )
                  goto LABEL_41;
              }
              *(_DWORD *)(v36 + 12 * v39 + 148) = -1073610752;
LABEL_90:
              v42 = (_DWORD *)(v36 + 136);
              ++*(_DWORD *)(v36 + 136);
              ++*(_DWORD *)(v13 + 260);
              goto LABEL_40;
            }
            v42 = (_DWORD *)(v36 + 136);
LABEL_41:
            if ( *v42 == v40 )
            {
              *(_DWORD *)(v36 + 4) = -1073739008;
              v43 = -1073741823;
            }
            else
            {
              *(_DWORD *)(v36 + 4) = 0;
              v43 = 0;
            }
            *((_DWORD *)v6 + 17) = v43;
            ++*(_DWORD *)(v13 + 240);
            *(_QWORD *)(v13 + 248) += *((unsigned int *)v6 + 21);
            if ( *((int *)v6 + 17) < 0 )
              ++*(_DWORD *)(v13 + 244);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_DDqdDDDD(
                *(_QWORD *)(*(_QWORD *)(v13 + 56) + 80LL),
                *(unsigned __int8 *)(*(_QWORD *)(v13 + 48) + 135LL),
                v38,
                v36,
                v55,
                *(_BYTE *)(*(_QWORD *)(v13 + 48) + 135LL),
                *(_DWORD *)(*(_QWORD *)(v13 + 56) + 144LL),
                v6[3],
                *((_DWORD *)v6 + 17),
                *(_DWORD *)(v36 + 128),
                v38,
                *((_DWORD *)v6 + 24),
                *((_DWORD *)v6 + 21));
            v44 = (struct _MDL *)v6[9];
            if ( v44 )
            {
              v45 = v6[6];
              switch ( *(_WORD *)(v45 + 2) )
              {
                case '9':
                case ':':
                  goto LABEL_94;
                default:
                  if ( v44 != *(struct _MDL **)(v45 + 48) )
                  {
LABEL_94:
                    IoFreeMdl(v44);
                    v6[9] = 0LL;
                  }
                  break;
              }
            }
            *((_BYTE *)v6 + 16) = 0;
            v46 = KfRaiseIrql(2u);
            (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
              WdfDriverGlobals,
              v6[3],
              *((unsigned int *)v6 + 17));
            KeLowerIrql(v46);
            *(_BYTE *)(v13 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + 96));
LABEL_51:
            --*(_DWORD *)(v13 + 376);
            v47 = *(_BYTE *)(v13 + 104);
            *a6 = *(_DWORD *)(v13 + 376);
            KeReleaseSpinLock((PKSPIN_LOCK)(v13 + 96), v47);
            result = (__int64)a5;
            *a5 = 1;
            return result;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v51 = *(_QWORD *)(v13 + 48);
            v52 = *(unsigned __int8 *)(v51 + 135);
            LOBYTE(v51) = 4;
            WPP_RECORDER_SF_DDqd(
              *(_QWORD *)(*(_QWORD *)(v13 + 56) + 80LL),
              v51,
              v52,
              17,
              (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
              v52,
              *(_DWORD *)(*(_QWORD *)(v13 + 56) + 144LL),
              v6[3],
              v35);
          }
          *((_DWORD *)v6 + 16) = 2;
          v53 = *(__int64 ***)(v13 + 408);
          if ( *v53 == (__int64 *)(v13 + 400) )
          {
            *v6 = v13 + 400;
            v6[1] = (__int64)v53;
            *v53 = v6;
            *(_QWORD *)(v13 + 408) = v6;
            goto LABEL_51;
          }
        }
      }
      __fastfail(3u);
    }
    if ( *((_DWORD *)v6 + 16) == 3 )
      goto LABEL_51;
    goto LABEL_34;
  }
  return result;
}
