/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18002E2DC
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x18002E1C8 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     ?FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@PEAEPEAX_KI@Z @ 0x18002E050 (-FindInsertionPointOrIncrement@RawUsageIndex@details_abi@wil@@AEAAPEAEAEAUUsageIndexProperty@23@.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x18002E5D0 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x18002E604 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x18002E6C0 (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x18002E808 (-GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x18002E9A4 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 */

char __fastcall wil::details_abi::RawUsageIndex::RecordUsageInternal(
        wil::details_abi::RawUsageIndex *this,
        void *a2,
        unsigned __int64 a3,
        void *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  __int64 v6; // rdi
  unsigned __int8 *v10; // rdi
  char v11; // r13
  unsigned __int8 *v12; // r8
  bool v13; // al
  unsigned int v14; // esi
  unsigned __int64 v15; // r14
  int v16; // eax
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  unsigned int v19; // edx
  void *v20; // r15
  unsigned __int8 *InsertionPointOrIncrement; // rax
  __int64 v22; // r8
  unsigned __int64 Size; // rax
  unsigned __int64 v24; // r9
  __int64 v25; // rdx
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rdx
  unsigned __int8 *v28; // r8
  unsigned int v30; // esi
  __int16 v31; // [rsp+30h] [rbp-49h] BYREF
  char v32; // [rsp+32h] [rbp-47h]
  unsigned int v33; // [rsp+34h] [rbp-45h]
  __int16 v34; // [rsp+38h] [rbp-41h]
  __int128 v35; // [rsp+40h] [rbp-39h]
  __int16 v36; // [rsp+50h] [rbp-29h] BYREF
  char v37; // [rsp+52h] [rbp-27h]
  unsigned int v38; // [rsp+54h] [rbp-25h]
  __int16 v39; // [rsp+58h] [rbp-21h]
  __int64 v40; // [rsp+60h] [rbp-19h]
  void *v41; // [rsp+68h] [rbp-11h]
  __int16 v42; // [rsp+70h] [rbp-9h] BYREF
  char v43; // [rsp+72h] [rbp-7h]
  int v44; // [rsp+74h] [rbp-5h]
  __int16 v45; // [rsp+78h] [rbp-1h]
  __int128 v46; // [rsp+80h] [rbp+7h]
  unsigned __int8 *v47; // [rsp+D0h] [rbp+57h] BYREF
  void *v48; // [rsp+E8h] [rbp+6Fh]

  v48 = a4;
  v6 = *((_QWORD *)this + 3);
  if ( !v6 )
    return 0;
  v31 = *((_WORD *)this + 1);
  v10 = (unsigned __int8 *)(v6 + 10);
  v11 = 0;
  v32 = *((_BYTE *)this + 4);
  v33 = 0;
  v34 = 0;
  v35 = 0LL;
  while ( 1 )
  {
    v12 = (unsigned __int8 *)*((_QWORD *)this + 4);
    v47 = v10;
    v13 = wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v31, &v47, v12);
    v14 = a6;
    v15 = a5;
    if ( !v13 )
    {
      v10 = v47;
      *((_QWORD *)this + 4) = v47;
LABEL_19:
      v33 = 1;
      v34 = a3;
      *(_QWORD *)&v35 = 0LL;
      *((_QWORD *)&v35 + 1) = a2;
      wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v31);
      v20 = v48;
      goto LABEL_12;
    }
    v16 = wil::details_abi::UsageIndexProperty::Compare((wil::details_abi::UsageIndexProperty *)&v31, a2, a3);
    if ( v16 < 0 )
    {
      v47 = v10;
      goto LABEL_19;
    }
    if ( !v16 )
      break;
    v17 = *((_QWORD *)this + 2);
    v10 = v47;
    if ( v17 )
    {
      v18 = (*((_QWORD *)this + 4) - *((_QWORD *)this + 3)) / v17;
      v19 = v33;
      if ( v33 > v18 )
      {
        wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v31, v18);
        v17 = *((_QWORD *)this + 2);
        v19 = v33;
      }
      v10 += v17 * v19;
    }
    else
    {
      v30 = 0;
      v42 = *((_WORD *)this + 3);
      v43 = *((_BYTE *)this + 8);
      v44 = 0;
      v45 = 0;
      v46 = 0LL;
      if ( v33 )
      {
        do
        {
          if ( !wil::details_abi::UsageIndexProperty::Read(
                  (wil::details_abi::UsageIndexProperty *)&v42,
                  &v47,
                  *((unsigned __int8 **)this + 4)) )
            break;
          ++v30;
        }
        while ( v30 < v33 );
        v10 = v47;
      }
      wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v31, v30);
    }
  }
  v20 = v48;
  InsertionPointOrIncrement = wil::details_abi::RawUsageIndex::FindInsertionPointOrIncrement(
                                this,
                                (struct wil::details_abi::UsageIndexProperty *)&v31,
                                v47,
                                v48,
                                v15,
                                v14);
  v22 = 0LL;
  v47 = InsertionPointOrIncrement;
  v10 = InsertionPointOrIncrement;
  if ( !InsertionPointOrIncrement )
    return 1;
  v11 = 1;
LABEL_12:
  v36 = *((_WORD *)this + 3);
  v37 = *((_BYTE *)this + 8);
  v38 = v14;
  v39 = v15;
  v40 = v22;
  v41 = v20;
  Size = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v36);
  v24 = *((_QWORD *)this + 4);
  v26 = v25 + Size;
  v27 = *((_QWORD *)this + 5);
  if ( ((v27 - v24) & -(__int64)(v24 < v27)) < v26 )
    return 0;
  memmove_s(&v10[v26], v27 - v26 - (_QWORD)v10, v10, v24 - (_QWORD)v10);
  v28 = (unsigned __int8 *)(v26 + *((_QWORD *)this + 4));
  *((_QWORD *)this + 4) = v28;
  if ( v11 )
  {
    if ( v32 )
      wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v31, v33 + 1);
  }
  else
  {
    wil::details_abi::UsageIndexProperty::Write((wil::details_abi::UsageIndexProperty *)&v31, &v47, v28);
  }
  wil::details_abi::UsageIndexProperty::Write(
    (wil::details_abi::UsageIndexProperty *)&v36,
    &v47,
    *((unsigned __int8 **)this + 4));
  *((_BYTE *)this + 56) = 1;
  return 1;
}
