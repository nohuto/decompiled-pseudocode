__int64 __fastcall PopPepTriggerComponentActivatingActivity(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // r8
  __int64 v5; // r8
  __int64 result; // rax

  if ( a2 )
  {
    v4 = *(_QWORD *)(a2 + 128);
    if ( v4 >= MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a2 + 136) )
      v4 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a2 + 136);
    *(_DWORD *)(a2 + 152) = 0;
    *(_QWORD *)(a2 + 120) = v4;
    PopPepTryPowerUpComponent();
    LOBYTE(v5) = 1;
    return PopPepUpdateIdleState(a1, a2, v5);
  }
  return result;
}
