__int64 __fastcall MmCreateTeb(PRKPROCESS PROCESS, __int64 a2, _QWORD *a3, __int64 a4, _QWORD *a5)
{
  unsigned int v7; // esi
  __int64 v8; // r13
  __int64 *v9; // rax
  __int64 v10; // rdx
  int v11; // edi
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int16 v16; // ax
  char v17; // al
  __int64 v18; // [rsp+20h] [rbp-78h] BYREF
  __int64 v19; // [rsp+28h] [rbp-70h]
  _QWORD *v20; // [rsp+30h] [rbp-68h]
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-60h] BYREF

  v19 = a2;
  v20 = a5;
  v18 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v7 = 4;
  v8 = 0LL;
  v9 = (__int64 *)PROCESS[1].Affinity.StaticBitmap[30];
  if ( v9 )
    v8 = *v9;
  if ( v8 )
  {
    if ( !v9
      || ((v16 = WORD2(PROCESS[2].Affinity.StaticBitmap[20]), v16 == 332) || v16 == 452 ? (v17 = 1) : (v17 = 0),
          v7 = 5,
          !v17) )
    {
      v7 = 6;
    }
  }
  KeStackAttachProcess(PROCESS, &ApcState);
  v11 = MiCreatePebOrTeb(v7, v10, &v18);
  if ( v11 < 0 )
  {
    KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
    return (unsigned int)v11;
  }
  v12 = v18;
  *(_DWORD *)(v18 + 32) = 7680;
  *(_QWORD *)(v12 + 48) = v12;
  *(_QWORD *)(v12 + 72) = a3[1];
  *(_QWORD *)(v12 + 64) = *a3;
  *(_DWORD *)(v12 + 744) = 65534;
  *(_QWORD *)(v12 + 2016) = a3[1];
  *(_QWORD *)(v12 + 2008) = *a3;
  *(_WORD *)(v12 + 4698) = 522;
  *(_QWORD *)(v12 + 4704) = v12 + 4712;
  *(_QWORD *)(v12 + 96) = PROCESS[1].Affinity.StaticBitmap[24];
  v13 = v19;
  *(_QWORD *)(v12 + 8) = *(_QWORD *)(v19 + 16);
  *(_QWORD *)(v12 + 16) = *(_QWORD *)(v13 + 24);
  *(_QWORD *)(v12 + 5240) = *(_QWORD *)(v13 + 32);
  if ( v7 == 5 )
  {
    v14 = v12 + 0x2000;
    v19 = v12 + 0x2000;
    *(_DWORD *)(v12 + 8208) = 7680;
    *(_DWORD *)(v12 + 8216) = v12 + 0x2000;
    *(_DWORD *)(v12 + 8228) = *((_DWORD *)a3 + 2);
    *(_DWORD *)(v12 + 8224) = *(_DWORD *)a3;
    *(_DWORD *)(v12 + 8656) = 65534;
    *(_DWORD *)(v12 + 9912) = *((_DWORD *)a3 + 2);
    *(_DWORD *)(v12 + 9908) = *(_DWORD *)a3;
    *(_WORD *)(v12 + 11258) = 522;
    *(_DWORD *)(v12 + 11260) = v12 + 11264;
    *(_DWORD *)(v12 + 0x2000) = -1;
    *(_DWORD *)(v12 + 8240) = v8;
    *(_DWORD *)(v12 + 12144) = v12;
    *(_DWORD *)(v12 + 12056) = *(_DWORD *)(v12 + 5776);
    *(_DWORD *)(v12 + 8196) = *(_DWORD *)(v13 + 40);
    *(_DWORD *)(v12 + 8200) = *(_DWORD *)(v13 + 48);
    *(_DWORD *)(v12 + 11788) = *(_DWORD *)(v13 + 56);
    *(_DWORD *)(v12 + 6156) = 0x2000;
    *(_DWORD *)(v12 + 12252) = -8192;
    goto LABEL_9;
  }
  if ( v7 == 6 )
  {
    v14 = v12 + 0x2000;
    *(_DWORD *)(v12 + 8224) = 7680;
    *(_QWORD *)(v12 + 8240) = v12 + 0x2000;
    *(_QWORD *)(v12 + 8264) = a3[1];
    *(_QWORD *)(v12 + 8256) = *a3;
    *(_DWORD *)(v12 + 8936) = 65534;
    *(_QWORD *)(v12 + 10208) = a3[1];
    *(_QWORD *)(v12 + 10200) = *a3;
    *(_WORD *)(v12 + 12890) = 522;
    *(_QWORD *)(v12 + 12896) = v12 + 12904;
    *(_QWORD *)(v12 + 8288) = v8;
    *(_DWORD *)(v12 + 14144) = 0;
    *(_QWORD *)(v12 + 13968) = *(_QWORD *)(v12 + 5776);
    *(_QWORD *)(v12 + 8200) = *(_QWORD *)(v13 + 40);
    *(_QWORD *)(v12 + 8208) = *(_QWORD *)(v13 + 48);
    *(_QWORD *)(v12 + 13432) = *(_QWORD *)(v13 + 56);
    *(_DWORD *)(v12 + 6156) = 0x2000;
    *(_DWORD *)(v12 + 14348) = -8192;
LABEL_9:
    *(_QWORD *)v12 = v14;
  }
  KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
  *a5 = v12;
  return (unsigned int)v11;
}
