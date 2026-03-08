/*
 * XREFs of IopAddRemoveReqDescs @ 0x1408061D8
 * Callers:
 *     IopSelectNextConfiguration @ 0x140803664 (IopSelectNextConfiguration.c)
 *     PnpFindBestConfigurationWorker @ 0x14080375C (PnpFindBestConfigurationWorker.c)
 *     PnpSelectFirstConfiguration @ 0x140803F50 (PnpSelectFirstConfiguration.c)
 *     IopBootAllocation @ 0x140804CB0 (IopBootAllocation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

void __fastcall IopAddRemoveReqDescs(__int64 a1, unsigned int a2, _QWORD *a3, char a4)
{
  __int64 v4; // rsi
  __int64 v9; // rdi
  __int64 v10; // rbx
  char v11; // al
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  _QWORD *v14; // rdx
  _QWORD *i; // rcx
  __int64 v16; // rcx
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  __int64 v21; // rcx

  if ( a2 )
  {
    v4 = 0LL;
    do
    {
      v9 = *(_QWORD *)(a1 + 8 * v4);
      if ( *(_BYTE *)(v9 + 8) )
      {
        v10 = *(_QWORD *)(v9 + 288);
        v11 = *(_BYTE *)(v10 + 104);
        if ( (v11 & 1) != 0 )
        {
          v21 = *(_QWORD *)(v10 + 24);
          *(_BYTE *)(v10 + 104) = v11 & 0xFE;
          (*(void (__fastcall **)(_QWORD, __int64))(v21 + 32))(*(_QWORD *)(v21 + 8), 3LL);
        }
        *(_BYTE *)(v10 + 105) = 1;
        v12 = (_QWORD *)(*(_QWORD *)(v9 + 32) + 40LL);
        if ( a4 )
        {
          *(_QWORD *)(*(_QWORD *)(v9 + 32) + 48LL) = *(_QWORD *)(v9 + 32) + 40LL;
          *v12 = v12;
          v13 = *(_QWORD **)(v10 + 48);
          if ( *v13 != v10 + 40 )
            goto LABEL_21;
          v12[1] = v13;
          *v12 = v10 + 40;
          *v13 = v12;
          v14 = (_QWORD *)(v10 + 88);
          *(_QWORD *)(v10 + 48) = v12;
          if ( (_QWORD *)*v14 == v14 )
          {
            for ( i = (_QWORD *)*a3; i != a3; i = (_QWORD *)*i )
            {
              if ( *(_DWORD *)(*(i - 7) + 152LL) >= *(_DWORD *)(*(_QWORD *)(v10 + 32) + 152LL) )
                break;
            }
            *v14 = i;
            *(_QWORD *)(v10 + 96) = i[1];
            *(_QWORD *)i[1] = v14;
            i[1] = v14;
          }
        }
        else
        {
          v16 = *v12;
          if ( *(_QWORD **)(*v12 + 8LL) != v12
            || (v17 = *(_QWORD **)(*(_QWORD *)(v9 + 32) + 48LL), (_QWORD *)*v17 != v12) )
          {
LABEL_21:
            __fastfail(3u);
          }
          *v17 = v16;
          *(_QWORD *)(v16 + 8) = v17;
          v12[1] = v12;
          *v12 = v12;
          if ( *(_QWORD *)(v10 + 40) == v10 + 40 )
          {
            v18 = (_QWORD *)(v10 + 88);
            v19 = *(_QWORD *)(v10 + 88);
            if ( *(_QWORD *)(v19 + 8) != v10 + 88 )
              goto LABEL_21;
            v20 = *(_QWORD **)(v10 + 96);
            if ( (_QWORD *)*v20 != v18 )
              goto LABEL_21;
            *v20 = v19;
            *(_QWORD *)(v19 + 8) = v20;
            *(_QWORD *)(v10 + 96) = v10 + 88;
            *v18 = v18;
          }
        }
      }
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < a2 );
  }
}
