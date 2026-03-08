/*
 * XREFs of ?UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ @ 0x1C02B8A98
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02B740C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02B7BC0 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

void __fastcall RFONTOBJ::UpdateFontLinksLockOrder(RFONTOBJ *this)
{
  __int64 v1; // r8
  unsigned int v3; // eax
  __int64 v4; // rbx
  unsigned __int8 v5; // di
  __int64 v6; // rdx
  __int64 v7; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rsi
  char *v13; // rdx
  char v14; // al
  _QWORD v15[2]; // [rsp+20h] [rbp-248h] BYREF
  __int64 Base; // [rsp+30h] [rbp-238h] BYREF
  _BYTE v17[536]; // [rsp+38h] [rbp-230h] BYREF

  v1 = *(_QWORD *)this;
  v3 = *(_DWORD *)(*(_QWORD *)this + 840LL);
  if ( v3 <= 0x20 )
  {
    v4 = 0LL;
    v5 = 0;
    if ( v3 )
    {
      do
      {
        v6 = 2LL * v5;
        v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 744) + 8LL * v5) + 120LL);
        v17[8 * v6] = v5++;
        *(_QWORD *)&v17[8 * v6 - 8] = v7;
      }
      while ( (unsigned int)v5 < *(_DWORD *)(v1 + 840) );
    }
    v8 = v15;
    v15[0] = *(_QWORD *)(v1 + 736);
    v9 = *(_QWORD *)(v1 + 728);
    v10 = 2LL;
    v15[1] = v9;
    do
    {
      if ( *v8 )
        v11 = *(_QWORD *)(*v8 + 120LL);
      else
        v11 = 0LL;
      *(_QWORD *)&v17[16 * v5 - 8] = v11;
      ++v8;
      v17[16 * v5] = v5;
      ++v5;
      --v10;
    }
    while ( v10 );
    v12 = v5;
    qsort(&Base, v5, 0x10uLL, (int (__cdecl *)(const void *, const void *))RFONTOBJ::AddressMap::Compare);
    if ( v5 )
    {
      v13 = v17;
      do
      {
        v14 = *v13;
        v13 += 16;
        *(_BYTE *)(v4 + *(_QWORD *)this + 856) = v14;
        ++v4;
        --v12;
      }
      while ( v12 );
    }
  }
}
