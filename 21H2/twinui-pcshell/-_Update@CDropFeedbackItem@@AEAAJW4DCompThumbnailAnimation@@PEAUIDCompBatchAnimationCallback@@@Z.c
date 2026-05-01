/*
 * XREFs of ?_Update@CDropFeedbackItem@@AEAAJW4DCompThumbnailAnimation@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18049B584
 * Callers:
 *     ?Show@CDropFeedbackItem@@UEAAXXZ @ 0x18049B2B0 (-Show@CDropFeedbackItem@@UEAAXXZ.c)
 *     ?Update@CDropFeedbackItem@@UEAAJPEAUIDCompBatchAnimationCallback@@@Z @ 0x18049B310 (-Update@CDropFeedbackItem@@UEAAJPEAUIDCompBatchAnimationCallback@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_56efceb929603a68680b7e7e2fb7301f___ @ 0x180499CB0 (DCompThumbnailHelpers--DCompThumbnail_MakeAnimationHandler__lambda_ed8ffcce05179564_ea_180499CB0.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetOpacityWithPreAndPostCallbacks__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d___ @ 0x180499E08 (DCompThumbnailHelpers--DCompThumbnail_SetOpacityWithPreAndPostCallbacks__lambda_ed8ffcce05179564.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetRectWithPreAndPostCallbacks__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb___ @ 0x180499EA4 (DCompThumbnailHelpers--DCompThumbnail_SetRectWithPreAndPostCallbacks__lambda_ed8ffcce05179564df3.c)
 *     ?_ZoomRect@CDropFeedbackItem@@AEAAXW4ZoomRectType@1@PEAUtagRECT@@@Z @ 0x18049BBF4 (-_ZoomRect@CDropFeedbackItem@@AEAAXW4ZoomRectType@1@PEAUtagRECT@@@Z.c)
 *     McTemplateU0ddz_EventWriteTransfer @ 0x18049BE54 (McTemplateU0ddz_EventWriteTransfer.c)
 *     McTemplateU0qdddd_EventWriteTransfer @ 0x18049BEE0 (McTemplateU0qdddd_EventWriteTransfer.c)
 */

__int64 __fastcall CDropFeedbackItem::_Update(struct tagPOINT a1, unsigned int a2, __int64 a3)
{
  int v3; // edi
  int v5; // ecx
  unsigned int v8; // r15d
  int v9; // ecx
  int v10; // ecx
  HWND v11; // rdx
  __int64 v12; // rcx
  __int64 (__fastcall *v13)(__int64, struct tagPOINT *, _QWORD, _QWORD); // rax
  __int64 v14; // rdx
  unsigned int v15; // eax
  HWND v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *v19; // rcx
  __int64 v20; // rdx
  int v21; // r8d
  int v22; // r10d
  int v23; // r11d
  __int128 v24; // xmm0
  int v25; // eax
  int v26; // r9d
  int v27; // r9d
  int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // ecx
  bool v33; // [rsp+40h] [rbp-49h] BYREF
  struct tagPOINT v34; // [rsp+48h] [rbp-41h] BYREF
  int v35; // [rsp+50h] [rbp-39h]
  __int128 v36; // [rsp+60h] [rbp-29h] BYREF
  __int128 v37; // [rsp+70h] [rbp-19h] BYREF
  struct tagPOINT Points[2]; // [rsp+80h] [rbp-9h] BYREF
  __int128 v39; // [rsp+90h] [rbp+7h] BYREF

  v3 = 0;
  v5 = *(_DWORD *)(*(_QWORD *)&a1 + 68LL);
  v8 = 0;
  if ( !v5 )
  {
    v33 = 0;
    *((_QWORD *)&v36 + 1) = &v33;
    *(struct tagPOINT *)&v36 = a1;
    if ( a2 == 6 )
    {
      v34 = 0LL;
      Points[0] = a1;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)Points);
      *(struct tagPOINT *)&v36 = a1;
      *((_QWORD *)&v36 + 1) = &v33;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
      *(struct tagPOINT *)&v37 = a1;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v37);
      if ( (int)DCompThumbnailHelpers::DCompThumbnail_MakeAnimationHandler__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_56efceb929603a68680b7e7e2fb7301f___(
                  (__int64)&v36,
                  (__int64 *)&v37,
                  a3,
                  &v34) >= 0 )
        (*(void (__fastcall **)(_QWORD, __int64, struct tagPOINT))(**(_QWORD **)(*(_QWORD *)&a1 + 184LL) + 128LL))(
          *(_QWORD *)(*(_QWORD *)&a1 + 184LL),
          6LL,
          v34);
      v19 = (__int64 *)Points;
    }
    else
    {
      if ( (*(_DWORD *)(*(_QWORD *)&a1 + 72LL) & 0x80000) == 0 )
      {
        v21 = *(_DWORD *)(*(_QWORD *)&a1 + 140LL);
        v22 = *(_DWORD *)(*(_QWORD *)&a1 + 144LL);
        v23 = *(_DWORD *)(*(_QWORD *)&a1 + 128LL);
        v24 = *(_OWORD *)(*(_QWORD *)&a1 + 124LL);
        v25 = (*(_DWORD *)(*(_QWORD *)&a1 + 148LL) - v21) / 2;
        v37 = 0LL;
        v26 = v25 - (*(_DWORD *)(*(_QWORD *)&a1 + 132LL) - *(_DWORD *)(*(_QWORD *)&a1 + 124LL)) / 2;
        v27 = (v21 + v26 - *(_DWORD *)(*(_QWORD *)&a1 + 124LL)) * (v21 + v26 - *(_DWORD *)(*(_QWORD *)&a1 + 124LL));
        v28 = v22
            + (*(_DWORD *)(*(_QWORD *)&a1 + 152LL) - v22) / 2
            - (*(_DWORD *)(*(_QWORD *)&a1 + 136LL) - v23) / 2
            - v23;
        *(_OWORD *)(*(_QWORD *)&a1 + 140LL) = v24;
        v33 = v27 + v28 * v28 < 10;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))CDropFeedbackItem::_ZoomRect)(a1, 1LL, &v37);
        v29 = (unsigned int)(HIDWORD(v37) - DWORD1(v37));
        if ( *(_DWORD *)(*(_QWORD *)&a1 + 132LL) - *(_DWORD *)(*(_QWORD *)&a1 + 124LL) != DWORD2(v37) - (_DWORD)v37
          || *(_DWORD *)(*(_QWORD *)&a1 + 136LL) - *(_DWORD *)(*(_QWORD *)&a1 + 128LL) != (_DWORD)v29 )
        {
          v3 = 1;
        }
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)&a1 + 184LL) + 32LL))(
          *(_QWORD *)(*(_QWORD *)&a1 + 184LL),
          v29,
          a2,
          0LL);
        Points[0] = a1;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)Points);
        v34 = a1;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v34);
        v30 = *(_QWORD *)(*(_QWORD *)&a1 + 184LL);
        v35 = v3;
        DCompThumbnailHelpers::DCompThumbnail_SetRectWithPreAndPostCallbacks__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_2d92cd2f02e6c81ca22f9b884cbeb9cb___(
          v30,
          (int)&v37,
          a2,
          &v36,
          (__int64 *)&v34,
          a3);
        v39 = 0LL;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))CDropFeedbackItem::_ZoomRect)(a1, 0LL, &v39);
        (*(void (__fastcall **)(_QWORD, __int128 *, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)&a1 + 184LL) + 40LL))(
          *(_QWORD *)(*(_QWORD *)&a1 + 184LL),
          &v39,
          a2,
          0LL);
        *(_BYTE *)(*(_QWORD *)&a1 + 157LL) = 1;
        if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
          McTemplateU0qdddd_EventWriteTransfer(
            v31,
            (unsigned int)&DropFeedbackItem_Update_Info,
            *(_DWORD *)(*(_QWORD *)&a1 + 32LL),
            v37,
            SBYTE4(v37),
            SBYTE8(v37),
            SBYTE12(v37));
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)Points);
        return v8;
      }
      v34 = 0LL;
      *(struct tagPOINT *)&v37 = a1;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v37);
      *(struct tagPOINT *)&v36 = a1;
      *((_QWORD *)&v36 + 1) = &v33;
      Points[0] = a1;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)Points);
      DCompThumbnailHelpers::DCompThumbnail_SetOpacityWithPreAndPostCallbacks__lambda_ed8ffcce05179564df35e7d067b53c30___lambda_d7ed0ff1ab0fb52f1367a70480edc44d___(
        *(_QWORD *)(*(_QWORD *)&a1 + 184LL),
        v20,
        a2,
        &v36,
        (__int64 *)Points,
        a3);
      v19 = (__int64 *)&v37;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v19);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v34);
    return v8;
  }
  v9 = v5 - 1;
  if ( !v9 )
    goto LABEL_10;
  v10 = v9 - 1;
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      v11 = *(HWND *)(*(_QWORD *)&a1 + 192LL);
      *(_OWORD *)&Points[0].x = *(_OWORD *)(*(_QWORD *)&a1 + 76LL);
      MapWindowPoints(0LL, v11, Points, 2u);
      v12 = *(_QWORD *)(*(_QWORD *)&a1 + 184LL);
      v13 = *(__int64 (__fastcall **)(__int64, struct tagPOINT *, _QWORD, _QWORD))(*(_QWORD *)v12 + 24LL);
      if ( (*(_DWORD *)(*(_QWORD *)&a1 + 72LL) & 0x80000) == 0 )
      {
        v15 = v13(v12, Points, a2, 0LL);
        goto LABEL_9;
      }
      v8 = v13(v12, Points, 0LL, 0LL);
      if ( (v8 & 0x80000000) == 0 )
      {
        v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)&a1 + 184LL) + 32LL))(
                *(_QWORD *)(*(_QWORD *)&a1 + 184LL),
                v14,
                a2,
                0LL);
LABEL_9:
        v8 = v15;
      }
LABEL_10:
      *(_BYTE *)(*(_QWORD *)&a1 + 157LL) = 1;
    }
  }
  else
  {
    v16 = *(HWND *)(*(_QWORD *)&a1 + 192LL);
    *(_OWORD *)&Points[0].x = *(_OWORD *)(*(_QWORD *)&a1 + 76LL);
    MapWindowPoints(0LL, v16, Points, 2u);
    (*(void (__fastcall **)(_QWORD, struct tagPOINT *, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)&a1 + 184LL) + 24LL))(
      *(_QWORD *)(*(_QWORD *)&a1 + 184LL),
      Points,
      0LL,
      0LL);
    if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      McTemplateU0ddz_EventWriteTransfer(
        v18,
        v17,
        *(unsigned int *)(*(_QWORD *)&a1 + 76LL),
        *(unsigned int *)(*(_QWORD *)&a1 + 80LL));
  }
  return v8;
}
