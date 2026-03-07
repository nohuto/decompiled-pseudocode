void __fastcall DelayZoneTelemetry::Initialize(DelayZoneTelemetry *this, int a2, int a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx

  *(_DWORD *)this = a2;
  *((_DWORD *)this + 1) = a3;
  v4 = MEMORY[0xFFFFF78000000320];
  v5 = MEMORY[0xFFFFF78000000004];
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = (unsigned __int64)(v4 * v5) >> 24;
  memset((char *)this + 2064, 0, 0x27F0uLL);
  memset((char *)this + 17, 0, 0x7FFuLL);
  *((_BYTE *)this + 16) = 0;
  *((_QWORD *)this + 1537) = (char *)this + 12288;
  *((_QWORD *)this + 1536) = (char *)this + 12288;
}
