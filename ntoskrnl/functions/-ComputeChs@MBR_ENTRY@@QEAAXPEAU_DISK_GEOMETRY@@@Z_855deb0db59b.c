void __fastcall MBR_ENTRY::ComputeChs(MBR_ENTRY *this, struct _DISK_GEOMETRY *a2)
{
  ULONG v2; // esi
  _BYTE **v3; // r14
  ULONG *v5; // rbx
  __int64 v6; // rbp
  ULONG v7; // edi
  ULONG v8; // ecx
  ULONG SectorsPerTrack; // r8d
  unsigned int v10; // r9d
  unsigned int v11; // ecx
  int v12; // r11d
  _BYTE *v13; // rdx
  _QWORD v14[5]; // [rsp+0h] [rbp-28h] BYREF
  int v15; // [rsp+30h] [rbp+8h] BYREF
  int v16; // [rsp+34h] [rbp+Ch]

  v2 = a2->SectorsPerTrack * a2->TracksPerCylinder;
  v3 = (_BYTE **)v14;
  v14[0] = (char *)this + 1;
  v5 = (ULONG *)&v15;
  v15 = *((_DWORD *)this + 2);
  v6 = 2LL;
  v14[1] = (char *)this + 5;
  v7 = a2->Cylinders.LowPart * v2;
  v16 = *((_DWORD *)this + 3) + v15 - 1;
  do
  {
    v8 = *v5;
    SectorsPerTrack = a2->SectorsPerTrack;
    if ( *v5 >= v7 )
    {
      v10 = a2->Cylinders.LowPart - 1;
      LOBYTE(v12) = a2->TracksPerCylinder - 1;
    }
    else
    {
      v10 = v8 / v2;
      v11 = v8 % v2;
      v12 = v11 / SectorsPerTrack;
      SectorsPerTrack = v11 % SectorsPerTrack + 1;
    }
    v13 = *v3;
    ++v5;
    *v13 = v12;
    ++v3;
    v13[1] = (v10 >> 2) ^ (SectorsPerTrack ^ (v10 >> 2)) & 0x3F;
    v13[2] = v10;
    --v6;
  }
  while ( v6 );
}
