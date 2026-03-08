/*
 * XREFs of Interrupter_ReleaseInterrupter @ 0x1C007A04C
 * Callers:
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C0079480 (Controller_WdfEvtDeviceReleaseHardware.c)
 * Callees:
 *     XilRegister_WriteUlong64 @ 0x1C0014C68 (XilRegister_WriteUlong64.c)
 *     XilRegister_WriteUlong @ 0x1C0018428 (XilRegister_WriteUlong.c)
 *     XilCommonBuffer_ReleaseBuffer @ 0x1C001E9A8 (XilCommonBuffer_ReleaseBuffer.c)
 */

void __fastcall Interrupter_ReleaseInterrupter(__int64 a1)
{
  __m128i *v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rdi
  _DWORD *v5; // rdx
  __int64 v6; // rcx
  _DWORD *v7; // rdx
  __int64 v8; // rcx
  _DWORD *v9; // rdx
  __int64 v10; // rdx
  _QWORD **v11; // rdi
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  struct _IO_WORKITEM *v14; // rcx
  __int64 v15; // rdx
  signed __int32 v16[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = *(__m128i **)(a1 + 8);
  v3 = v2[7].m128i_i64[1];
  v4 = v2[5].m128i_i64[1];
  if ( *(_DWORD *)(a1 + 100) == 1 )
  {
    if ( (_mm_srli_si128(v2[21], 8).m128i_u64[0] & 0x400) == 0 )
    {
      v5 = (_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL);
      if ( *(_BYTE *)(v4 + 137) )
      {
        *v5 = 0;
        _InterlockedOr(v16, 0);
      }
      else
      {
        XilRegister_WriteUlong(v4, v5, 0);
      }
      v6 = *(_QWORD *)(a1 + 24);
      v7 = (_DWORD *)(v6 + 16);
      if ( *(_BYTE *)(v4 + 137) )
      {
        if ( (*(_QWORD *)(*(_QWORD *)(v4 + 8) + 336LL) & 1) != 0 )
        {
          *v7 = 0;
          _InterlockedOr(v16, 0);
          *(_DWORD *)(v6 + 20) = 0;
        }
        else
        {
          *(_QWORD *)v7 = 0LL;
        }
        _InterlockedOr(v16, 0);
      }
      else
      {
        XilRegister_WriteUlong64(v4, v7, 0LL);
      }
      v8 = *(_QWORD *)(a1 + 24);
      v9 = (_DWORD *)(v8 + 24);
      if ( *(_BYTE *)(v4 + 137) )
      {
        if ( (*(_QWORD *)(*(_QWORD *)(v4 + 8) + 336LL) & 1) != 0 )
        {
          *v9 = 0;
          _InterlockedOr(v16, 0);
          *(_DWORD *)(v8 + 28) = 0;
        }
        else
        {
          *(_QWORD *)v9 = 0LL;
        }
        _InterlockedOr(v16, 0);
      }
      else
      {
        XilRegister_WriteUlong64(v4, v9, 0LL);
      }
    }
    v10 = *(_QWORD *)(a1 + 152);
    if ( v10 )
    {
      XilCommonBuffer_ReleaseBuffer(v3, v10);
      *(_QWORD *)(a1 + 152) = 0LL;
    }
    v11 = (_QWORD **)(a1 + 160);
    while ( 1 )
    {
      v12 = *v11;
      if ( *v11 == v11 )
        break;
      if ( (_QWORD **)v12[1] != v11 || (v13 = (_QWORD *)*v12, *(_QWORD **)(*v12 + 8LL) != v12) )
        __fastfail(3u);
      *v11 = v13;
      v13[1] = v11;
      XilCommonBuffer_ReleaseBuffer(v3, (__int64)v12);
    }
    v14 = *(struct _IO_WORKITEM **)(a1 + 200);
    if ( v14 )
    {
      IoFreeWorkItem(v14);
      *(_QWORD *)(a1 + 200) = 0LL;
    }
    v15 = *(_QWORD *)(a1 + 16);
    if ( v15 && v15 != *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL) )
      imp_WppRecorderLogDelete(WPP_GLOBAL_Control);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  *(_DWORD *)(a1 + 100) = 2;
}
