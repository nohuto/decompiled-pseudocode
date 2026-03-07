void __fastcall UnmapGpadl(__int64 a1, unsigned int a2, __int64 a3, struct _MDL *a4)
{
  int v4; // eax
  __int64 v8; // rbx
  __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  _BYTE v11[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+30h] [rbp-18h]

  v4 = *(_DWORD *)(a1 + 424);
  if ( (v4 & 0x100) != 0 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 608) + 608LL);
LABEL_3:
    v9 = v8 + 160;
    goto LABEL_7;
  }
  if ( (v4 & 0x80u) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 608);
    goto LABEL_3;
  }
  v9 = 0LL;
LABEL_7:
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11, (struct _KTHREAD **)(v9 + 16), 0);
  DXGPUSHLOCK::AcquireShared(v12);
  v13 = 1;
  if ( *(_BYTE *)(v9 + 68) )
  {
    ((void (__fastcall *)(_QWORD, _QWORD))qword_1C013D058)(*(_QWORD *)v9, a2);
    _InterlockedDecrement(&g_VgpuNumGpadlMappings);
    v10 = -a3;
    _InterlockedExchangeAdd64(&g_VgpuSizeGpadlMappings, v10);
    _InterlockedDecrement((volatile signed __int32 *)(v9 + 72));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 80), v10);
  }
  else if ( a4 )
  {
    MmFreePagesFromMdl(a4);
    ExFreePoolWithTag(a4, 0);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
}
